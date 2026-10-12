#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v)
    {
        val = v;
        next = nullptr;
    }
};

class LinkedList {
public:

    Node* head;

    LinkedList()
    {
        head = nullptr;
    }

    void build(int n)
    {
        Node* tail = nullptr;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            if(!head)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
        }
    }
};

/*
    Implement only the function below.
    Reverse the nodes from position left to right (1-indexed, inclusive)
    and return the head of the modified list.
*/

Node* reverseBetween(Node* head, int left, int right)
{
  Node *leftNode = NULL, *rightNode = NULL, *leftPrev = NULL, *rightNext = NULL;
  if(left == right) return head;
  //mark points. 
  int idx = 1;  
  auto cur = head; 
  while(cur!=NULL) {
    if(idx == left-1) {
      leftPrev = cur; 
    } else if(idx == left) {
      leftNode = cur;
    } else if(idx == right) {
      rightNode = cur;
    } else if(idx == right+1) {
      rightNext = cur; 
    }
    idx++;
    cur = cur->next; 
  }

  //break connections
  if(leftPrev != NULL) {
    leftPrev->next = NULL; 
  }
  rightNode->next = NULL; 

  //reverse sub part 
  Node *prev = NULL; 
  cur = leftNode; 
  while(cur!=NULL) {
    auto next = cur->next; 
      cur->next = prev; 
      prev = cur; 
      cur = next; 
  }

  //join connections 
  if(leftPrev == NULL) {
    head = rightNode; 
  } else {
    leftPrev->next = rightNode;
  }
  leftNode->next = rightNext;

  return head;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int left, right;
    cin >> left >> right;

    ll.head = reverseBetween(ll.head, left, right);

    Node* cur = ll.head;

    bool first = true;

    while(cur)
    {
        if(!first)
        {
            cout << ' ';
        }

        first = false;

        cout << cur->val;

        cur = cur->next;
    }

    cout << '\n';

    return 0;
}