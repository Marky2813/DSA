#include <bits/stdc++.h>
using namespace std;

/*
    Implement only the class below.
    LRUCache(int capacity) -- initialize the cache with the given capacity.
    int  get(int key)      -- return the value if present, else -1.
    void put(int key, int value) -- insert/update; evict the least recently
                                    used entry if the capacity is exceeded.
    Both get and put must run in O(1) average time.
*/

struct Node {
    int val;
    int key;  
    Node *next; 
    Node *prev; 

    Node(int v) {
      val = v; 
      key = -1;
      next = nullptr; 
      prev = nullptr; 
    }
};

class LRUCache {
    Node *head; 
    Node *tail; 
    int capacity;
    int filled = 0; 
    unordered_map<int, Node*> mp;
public:
    LRUCache(int capacity)
    {
     this->capacity = capacity;  
     head = nullptr; 
     tail = nullptr;
    }

    void remove(Node *node) {
      if(node->prev) node->prev->next = node->next; 
      if(node->next) node->next->prev = node->prev; 
      if(node == head) head = node->next; 
      if(node == tail) tail = node->prev; 
      node->prev = NULL; 
      node->next = NULL;
      filled--;
    }

    void insertAtHead(Node *node) {
      node->next = head; 
      if(head) head->prev = node; 
      if(!tail) tail = node; 
      head = node; 
      filled++;
    }

    int get(int key)
    {
      if(capacity == 0) return -1; 
      auto it = mp.find(key);
      if(it == mp.end()) return -1; 

      Node *node = it->second; 
      remove(node);
      insertAtHead(node);
      return node->val; 
    }

    void put(int key, int value)
    {
      if(capacity == 0) return; 
      auto it = mp.find(key);
      if(it != mp.end()) {
        Node *node = it->second; 
        node->val = value; 
        remove(node);
        insertAtHead(node);
        return; 
      }
      Node* newNode = new Node(value);
      newNode->key = key; 
      if(filled < capacity) {
        //insertAtHead; 
        mp[key] = newNode; 
        insertAtHead(newNode); 
      } else {
        Node* temp = tail;
        mp.erase(tail->key);
        remove(tail);
        delete temp;
        mp[key] = newNode;
        insertAtHead(newNode);
      }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cap, q;
    cin >> cap >> q;

    LRUCache cache(cap);

    string op;

    while (q--)
    {
        cin >> op;

        if (op == "get")
        {
            int k;
            cin >> k;
            cout << cache.get(k) << '\n';
        }
        else
        {
            int k, v;
            cin >> k >> v;
            cache.put(k, v);
            cout << "null" << '\n';
        }
    }

    return 0;
}