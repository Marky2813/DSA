
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
    Implement only the function below.
*/
Node* findMiddle(Node* head) {
    int len = 0; 
    Node* ptr = NULL; 
    while(ptr!=NULL) {
        len++; 
        ptr=ptr->next; 
    }
    int middle = 0; 
    if(len%2 == 0) {
        middle = len/2 - 1;
    } else {
        middle = len/2;
    }
    ptr = head; 
    for(int i = 1; i <= middle; i++){
        ptr=ptr->next;
    }
    return ptr; 
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    LinkedList ll;
    ll.build(n);
 
    Node* mid = findMiddle(ll.head);
    cout << mid->val << "\n";
 
    return 0;
}