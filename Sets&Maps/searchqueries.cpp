// Problem: Search queries with time complexity
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/B>
// Approach: maps and find() 

#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;  
    vector<long long> input(n); 
    for(int i = 0; i < n; i++) {
        cin >> input[i]; 
    }
    set<long long> st; 
    for(int i = 0; i < n; i++) {
        st.insert(input[i]); 
    }
    cout << st.size(); 
}