// Problem: Interval Sum
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/B>
// Approach: formula not for loop. observation. 

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++) {
        long long x, y; 
        cin >> x >> y; 
        long long sum; 
        if(x == y) {
            sum = x; 
            cout << sum; 
        } else {
            sum = y*(y+1)/2 - (x-1)*(x)/2; 
            cout << sum; 
        }
        cout << endl; 
    }
}