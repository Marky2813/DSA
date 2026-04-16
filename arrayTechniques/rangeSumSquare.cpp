// Problem: Range Sum Squares
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/D>
// Approach: Converting int * int to long long is the moat. 

//sum aur prefix sum array long long hoga, baaki sabh int chalega
#include<iostream>
using namespace std;
 
int main() {
    int n, q; 
    cin >> n >> q; 
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    long long sum = 0; 
    long long pss[n]; 
    for(int i = 0; i < n; i++) {
        sum = sum + (long long)arr[i] * arr[i]; 
        pss[i] = sum; 
    }
    for(int i = 0; i < q; i++) {
        int l, r; 
        cin >> l >> r; 
        if(l-1 == 0) {
            cout << pss[r-1]; 
        } else{
            cout << pss[r-1] - pss[l-2]; 
        }
        if(i != q-1) {
            cout << endl; 
        }
    }
    
}