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
    Reverse the singly linked list and return the head of the reversed list.
*/

Node* reverseList(Node* head)
{
    Node* prev = NULL; 
    auto cur = head; 
    while(cur!=NULL) {
      auto next = cur->next; 
      cur->next = prev; 
      prev = cur; 
      cur = next; 
    }
    head = prev; 
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

    ll.head = reverseList(ll.head);

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