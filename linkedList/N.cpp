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
    Reverse the nodes of the list k at a time and return the new head.
    If the number of nodes is not a multiple of k, the leftover nodes at the
    end remain in their original order.
*/

Node* reverseKGroup(Node* head, int k)
{
  int size = 0; 
  auto cur = head;
  while(cur!=NULL) {
    cur=cur->next; 
    size++; 
  }
  cur = head;
  int left = 0; 
  int right = k - 1; 
  int index = 0; 
  while(right<size) {
    if(left == right) {
      return head; 
    }
    Node *leftNode = NULL, *rightNode = NULL, *leftPrev = NULL, *rightNext = NULL;
    while(cur!=NULL) {
      if(index == left-1) {
        leftPrev = cur; 
      } else if(index == left) {
        leftNode = cur;
      } else if(index == right) {
        rightNode = cur; 
      } else if(index == right + 1) {
        rightNext = cur; 
        break;
      }
      cur = cur->next; 
      index++;
    }
    //break the connections 
    if(leftPrev != NULL) {
      leftPrev->next = NULL; 
    }
    rightNode->next = NULL; 

    //reverse
    Node* prev = NULL; 
    cur = leftNode; 
    while(cur != NULL) {
      Node* next = cur->next; 
      cur->next = prev;
      prev = cur; 
      cur = next; 
    }

    //join the connections back 
    if(leftPrev != NULL) {
      leftPrev->next = rightNode;
    } else {
      head = rightNode;
    }
    leftNode->next = rightNext;
    index = right; 
    left += k; 
    right += k; 
    cur = leftNode;
  }
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

    int k;
    cin >> k;

    ll.head = reverseKGroup(ll.head, k);

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