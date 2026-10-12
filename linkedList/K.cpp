#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int v) : val(v), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void build(int n) {
        Node* tail = nullptr;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            Node* node = new Node(x);
            if (!head) head = tail = node;
            else tail->next = node, tail = node;
        }
    }

    void print() {
        bool first = true;
        Node* cur = head;
        while (cur) {
            if (!first) cout << ' ';
            cout << cur->val;
            first = false;
            cur = cur->next;
        }
        cout << "\n";
    }

    ~LinkedList() {
        Node* cur = head;
        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
    }
};

/*
    Implement only the class below.
*/
class MyLinkedList {
    Node* head=NULL; 
public:
    MyLinkedList(Node* head) {
        // implement 
        this->head = head; 
    }

    int get(int index) {
        if(index<0 || head == NULL) return -1;
        auto ptr = head; 
        for(int i  = 0; i < index; i++) {
          ptr = ptr->next; 
          if(ptr == NULL) return -1;
        }
        // implement
        return ptr->val; 
    }

    void addAtHead(int val) { 
      Node* newNode = new Node(val);
      newNode->next = head;
      head = newNode; 
      return; 
        // implement
    }

    void addAtTail(int val) {
        auto ptr = head; 
        if(head == NULL) {
          head = new Node(val); 
          return; 
        }
        while(ptr->next != NULL) {
          ptr = ptr->next; 
        }
        Node* newNode = new Node(val);
        ptr->next = newNode; 
        return; 
        // implement
    }

    void addAtIndex(int index, int val) {
        // implement
        auto ptr = head; 
        if(index <= 0) {
          addAtHead(val);
          return; 
        } 
        for(int i = 0; i < index - 1 && ptr; i++) {wha
          ptr = ptr->next; 
        }
        if(!ptr) return; 
        Node* newNode = new Node(val);
        newNode->next = ptr->next; 
        ptr->next = newNode; 
        return; 
    }

    void deleteAtIndex(int index) {
        // implement
        auto ptr = head; 
        if(index<0 || head == NULL) return;
        if(index == 0) {
          head = head->next; 
          delete ptr; 
          return; 
        }
        for(int i = 0; i < index - 1 && ptr; i++) {
          ptr = ptr->next;
        }
        if(ptr == NULL || ptr->next == NULL) return;
        Node* nodeToDelete = ptr->next;
        ptr->next = ptr->next->next;
        delete nodeToDelete;
    }

    Node* getHead() {
        // implement
        return head;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;
    ll.build(n);

    MyLinkedList my(ll.head);

    int Q;
    cin >> Q;

    while (Q--) {
        int type;
        cin >> type;
        if (type == 0) {
            int index;
            cin >> index;
            cout << my.get(index) << "\n";
        } else if (type == 1) {
            int val;
            cin >> val;
            my.addAtHead(val);
        } else if (type == 2) {
            int val;
            cin >> val;
            my.addAtTail(val);
        } else if (type == 3) {
            int index, val;
            cin >> index >> val;
            my.addAtIndex(index, val);
        } else {
            int index;
            cin >> index;
            my.deleteAtIndex(index);
        }
    }

    ll.head = my.getHead();
    ll.print();
    return 0;
}

//okay this worked, but honestly it can be improved using size. 