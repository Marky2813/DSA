// Problem: Counting intervals
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/C>
// Approach: simple formulae

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++) {
        long long l, r; 
        int x; 
        cin >> x >> l >> r; 
        if(l > r) {
            cout << 0; 
        } else {
            if(x==1) {
                if(l == r) {
                    cout << 0; 
                } else {
                    cout << (r-l-1);   
                }
            } else if(x == 2 || x == 3) {
                    cout << (r-l);   
            } else if(x==4) {
                cout << (r-l+1); 
            }
        }
        cout << endl; 
    }
}