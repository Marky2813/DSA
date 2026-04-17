// Problem: Alt range sum 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/G>
// Approach: create a +-+... prefix array and if it is starting at an event element i.e an odd index, flip the sign

//if it is at even index, then add else you need to subtract
#include<iostream>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
    long long arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    long long sum = 0; 
    long long p[n];
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            sum += arr[i];  
        } else {
            sum -= arr[i]; 
        }
        p[i] = sum; 
    }
    
    for(int i = 0; i < q; i++) {
        int l, r; 
        cin >> l >> r;
        if(l-1 == 0) {
            cout << p[r-1] << endl; 
        } else {
            if(l%2 == 0) {
            cout << -(p[r-1] - p[l-2]) << endl; 
            } else {
            cout << p[r-1] - p[l-2] << endl; 
            }
        }
    }
}