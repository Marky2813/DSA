// Problem: Take intersection
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/F>
// Approach: store both the arrays in a set phir loop over one array if the key of the one exists in the other. store it in the set warna mat karo store
#include<iostream>
#include<set>
#include<map>
using namespace std; 

int main() {
    set<long long> s1, s2, s; 
    int n1; 
    cin >> n1; 
    for(int i = 0; i < n1; i++) {
        long long element; 
        cin >> element;
        s1.insert(element);
    }
    int n2; 
    cin >> n2; 
    for(int i = 0; i < n2; i++) {
        long long element; 
        cin >> element;
        s2.insert(element); 
    }
    for(auto ele: s1) {
        if(s2.count(ele)) {
            s.insert(ele);  
        }
    }
    cout << s.size() << "\n";
    for(long long num: s) {
      cout << num << " "; 
    } 
}

//update, we have a count function which is just use to check existence in the set. it returns 1 if the element exists and it returns 0 if it doesn't toh joh humara map ka scene hai. it won't be needed at all. 