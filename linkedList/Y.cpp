#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int val;
    Node* next;
    Node* random;
 
    Node(int v)
    {
        val = v;
        next = nullptr;
        random = nullptr;
    }
};
 
/*
    Implement only the function below.
    Return the head of a DEEP COPY of the list. Besides `next`, every node has
    a `random` pointer that may point to any node in the list or be null. None
    of the nodes in the returned list may point to nodes of the original list.
*/
 
Node* copyRandomList(Node* head)
{
  Node* dummyNode = new Node(-1);
  auto tail = dummyNode; 
  auto ptr = head; 
  if(head == NULL) return NULL;
 
  while(ptr!=NULL) {
    auto newNode = new Node(ptr->val);
    newNode->next = ptr->next; 
    ptr->next = newNode;  
    ptr = ptr->next->next; 
  }
  ptr = head; 
  tail->next = head->next;
  tail = head->next; 
  while(ptr!=NULL) {
    ptr->next->random = ptr->random ? ptr->random->next : NULL;
    ptr = ptr->next->next;
    tail->next = tail->next ? tail->next->next : NULL;
    tail = tail->next;
  }
  return dummyNode->next;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    if(!(cin >> n))
        return 0;
 
    vector<Node*> nodes(n);
 
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        nodes[i] = new Node(v);
    }
 
    for(int i = 0; i + 1 < n; i++)
        nodes[i]->next = nodes[i + 1];
 
    for(int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        nodes[i]->random = (r == -1 ? nullptr : nodes[r]);
    }
 
    Node* head = (n > 0 ? nodes[0] : nullptr);
 
    Node* copyHead = copyRandomList(head);
 
    // ---- collect the copied list along `next` ----
    vector<Node*> cp;
    unordered_map<Node*, int> idx;
 
    for(Node* c = copyHead; c; c = c->next)
    {
        idx[c] = (int)cp.size();
        cp.push_back(c);
    }
 
    // ---- set of ORIGINAL node pointers ----
    unordered_set<Node*> orig(nodes.begin(), nodes.end());
 
    // ---- deep-copy validation ----
    bool aliased = false;
 
    for(Node* c : cp)
        if(orig.count(c))          // a copy node IS an original node
        {
            aliased = true;
            break;
        }
 
    if(!aliased)
        for(Node* c : cp)
            if(c->random)
                if(orig.count(c->random) || !idx.count(c->random))
                {                  // a random pointer escapes the copied list
                    aliased = true;
                    break;
                }
 
    string out;
 
    if(aliased)
        out = "ALIASED\n";
    else
        for(Node* c : cp)
        {
            int ri = (c->random ? idx[c->random] : -1);
            out += to_string(c->val) + " " + to_string(ri) + "\n";
        }
 
    cout << out;
 
    return 0;
}