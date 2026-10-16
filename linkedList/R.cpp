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
    Partition the list so that every node with value < x comes before every
    node with value >= x, preserving the original relative order within each
    of the two partitions. Return the head of the partitioned list.
*/

Node* partition(Node* head, int x)
{
  auto ptr = head; 
  Node dummy1(-1);
  dummy1.next = head; 
  Node* tail1 = dummy1; 
  Node dummy2(-2);
  dummy2.next = head; 
  Node* tail2 = dummy2; 
  while(ptr!=NULL) {
    if(ptr->value < x) {
      tail1->next = ptr; 
      tail1 = ptr; 
    } else {
      tail2->next = ptr; 
      tail2 = ptr; 
    }
  }
  tail1->next = dummy2.next; 
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

    int x;
    cin >> x;

    ll.head = partition(ll.head, x);

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