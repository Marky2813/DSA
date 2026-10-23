#include <iostream>
using namespace std;

/*
    Implement only the class below, using a singly linked list.
    void push(int x) -- insert x onto the top of the stack.
    int  pop()       -- remove and return the top element; return -1 if empty.
    int  top()       -- return the top element; return -1 if empty.
    bool empty()     -- return true if the stack is empty, else false.
    int  size()      -- return the number of elements in the stack.
    Every operation must run in O(1) time.
*/

struct Node {
  int val; 
  Node *next; 

  Node(int v) {
    val = v; 
    next = nullptr;
  }
};


class MyStack {
  Node* head; 
  int siz; 
public:
    MyStack()
    {
      head = nullptr; 
      siz = 0; 
    }

    void insertAtHead(int x) {
      auto newNode = new Node(x);
      newNode->next = head; 
      head = newNode; 
      siz++;
      return; 
    }

    void remove() {
      if(head) {
        auto temp = head; 
        head = head->next;
        delete temp; 
        siz--;
        return; 
      }
    }
    void push(int x)
    {
      insertAtHead(x);
    }

    int pop()
    {
      if(!head) return -1;
      int val = head->val;
      remove();
      return val;
    }

    int top()
    {
      if(!head) return -1;
      return head->val;
    }

    bool empty()
    {
      return head == nullptr;
    }

    int size()
    {
return siz; 
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MyStack st;

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "null" << '\n';
        }
        else if (op == "pop")
        {
            cout << st.pop() << '\n';
        }
        else if (op == "top")
        {
            cout << st.top() << '\n';
        }
        else if (op == "empty")
        {
            cout << (st.empty() ? "true" : "false") << '\n';
        }
        else // size
        {
            cout << st.size() << '\n';
        }
    }

    return 0;
}