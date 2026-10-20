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
    Return true if the linked list is a palindrome, otherwise false.
*/

Node* getMiddle(Node* head) {
  auto slow = head; 
  auto fast = head->next; 

  while(fast!=NULL && fast->next!=NULL) {
    slow=slow->next; 
    fast=fast->next->next; 
  }

  return slow; 
}

Node* reverseLl(Node *head) {
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

bool isPalindrome(Node* head)
{
  auto middle = getMIddle(head); 
  auto head2 = middle->next; 
  middle->next = NULL; 
  head2 = reverseLl(head2);
  auto cur1 = head; 
  auto cur2 = head2;
  while(cur1!=NULL && cur2!=NULL) {
    if(cur1->val!=cur2->val) return false; 
    cur1=cur1->next; 
    cur2=cur2->next;  
  }
  return true; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;

    ll.build(n);

    cout << (isPalindrome(ll.head) ? "true" : "false") << '\n';

    return 0;
}