// Problem: Range Sum Queries
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/A>
// Approach: creating a prefix sum array

#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    long long arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    long long sum = 0;
    long long p[n]; 
    for(int i = 0; i < n; i++) {
        sum = sum + arr[i]; 
        p[i] = sum; 
    }
    int t; 
    cin >> t;
    for(int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r; 
        if(l-1 == 0) {
            cout << p[r-1]; 
        } else {
            cout << p[r-1] - p[l-2]; 
        }
        if(i != t-1) {
            cout << endl;
        }
    }
}