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
    Node* head; 
    int size;
public:

    MyLinkedList(Node* head) {
        // implement 
        this->head = head;
        this->size = 0; 
    }
    Node* getKthNode(int k) {
      if(k>=size) return NULL; 
      auto ptr = head; 
      for(int i = 0; i < k; i++) {
        ptr=ptr->next;
      }
      return ptr;
    }

    int get(int index) {
        // implement
        if(index<0 || index>=size) return -1;
        return getKthNode(index)->val;
    }

    void addAtHead(int val) {
      Node* newNode = new Node(val);
      newNode->next = head; 
      head = newNode; 
      size++;
      return;
        // implement
    }

    void addAtTail(int val) {
      addAtIndex(size, val);
      return; 
        // implement
    }

    void addAtIndex(int index, int val) {
        // implement
        if(index>size) return; 
        if(index<=0) {
          addAtHead(val);
          return;
        }
        auto prev = getKthNode(index-1);
        Node* newNode = new Node(val); 
        newNode->next = prev->next; 
        prev->next = newNode; 
        size++;
        return; 
    }

    void deleteAtIndex(int index) {
      if(index < 0 || index >= size) return; 
      if(index == 0) {
        auto ptr = head; 
        head = head->next; 
        delete ptr; 
        size--;
        return; 
      }
      auto cur = getKthNode(index);
      auto prev = getKthNode(index-1);
      prev->next = cur->next; 
      size--;
      delete cur; 
      return; 
        // implement
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