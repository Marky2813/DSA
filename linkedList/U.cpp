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
    Sort the linked list in ascending order and return the new head.
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

Node* mergeTwoLists(Node* l1, Node* l2)
{
  auto dummy = new Node(-1);
  auto tail = dummy; 

  tail->next = NULL; 

  auto ptr1 = l1; 
  auto ptr2 = l2; 

  while(ptr1 && ptr2) {
    if(ptr1->val <= ptr2->val) {
      tail->next = ptr1;
      tail = ptr1;  
      ptr1=ptr1->next; 
    } else {
      tail->next = ptr2;
      tail = ptr2;  
      ptr2=ptr2->next;
    }
  }
  if(ptr1) tail->next = ptr1; 
  if(ptr2) tail->next = ptr2; 

  return dummy->next; 
}

Node* sortList(Node* head)
{
  if(head==NULL || head->next==NULL) return head;
  auto middle = getMiddle(head);
  auto head2 = middle->next; 

  middle->next = NULL; 
  head = sortList(head);
  head2 = sortList(head2);
  return mergeTwoLists(head, head2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    ll.head = sortList(ll.head);

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