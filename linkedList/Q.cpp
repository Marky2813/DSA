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
    Node* tail;
    vector<Node*> nodes;

    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void build(int n)
    {
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            Node* node = new Node(x);

            nodes.push_back(node);

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
    Return the number of nodes in the loop, or 0 if there is no loop.
*/

int lengthOfLoop(Node* head)
{
  auto slow = head; 
  auto fast = head; 
  if(fast->next == NULL || fast == NULL) return 0;

  while(fast!=NULL && fast->next != NULL) {
    fast = fast->next->next; 
    slow = slow->next; 

    if(fast==slow) break;
  }
  int len = 0; 
  if(fast==slow) {
    //loop exists
    fast=fast->next;
    len++; 
    while(fast!= slow) {
      fast=fast->next;
      len++; 
    }
  }

  return len; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    int pos;
    cin >> pos;

    if(pos != -1)
        ll.tail->next = ll.nodes[pos];

    cout << lengthOfLoop(ll.head) << '\n';

    return 0;
}