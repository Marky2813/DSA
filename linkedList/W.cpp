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
    Reorder the list in place from
        L0 -> L1 -> ... -> Ln-1
    to
        L0 -> Ln-1 -> L1 -> Ln-2 -> L2 -> ...
    Do not return anything; modify the list in place.
*/

Node* getMiddle(Node* head) {
  auto fast = head; 
  auto slow = head; 

  while(fast!=NULL && fast->next!=NULL) {
    slow=slow->next; 
    fast=fast->next->next;
  }

  return slow; 
}

Node* reverseLl(Node* head) {
  Node* prev = NULL; 
  auto cur = head; 
  while(cur!=NULL) {
    auto next = cur->next; 
    cur->next = prev; 
    prev = cur; 
    cur = next; 
  }
  return prev; 
}
void reorderList(Node* head)
{
  auto middle = getMiddle(head);
  auto head2 = middle->next; 
  middle->next = NULL;
  head2 = reverseLl(head2);
  auto cur1 = head; 
  auto cur2 = head2; 
  auto dummy = new Node(-1);
  auto tail = dummy; 
  tail->next = head;
  int index = 0;  
  while(cur1 && cur2) {
    if(index%2==0) {
      tail->next = cur2; 
      tail = cur2; 
      cur1 = cur1->next; 
    } else {
      tail->next = cur1; 
      tail = cur1; 
      cur2 = cur2->next; 
    }
    index++;
  }
  if(cur1) tail->next = cur1;
  if(cur2) tail->next = cur2; 

  return; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    reorderList(ll.head);

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