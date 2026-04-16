// Problem: Digit Sum K using prefix sum
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/E>
// Approach: creating a prefix sum array for the number of digits having a particular sum



#include<iostream>
using namespace std;
 
int main() {
    int n, q, k;
    cin >> n >> q >> k;
    long long arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    //now let us calculate prefix elements array having sum 10
    long long elements = 0;
    long long p[n]; 
    for(int i = 0; i < n; i++) {
        long long current = arr[i]; 
        int sum = 0; 
        while(current > 0) {
            sum = sum + current%10;
            current = current/10; 
        }
        if(sum == k) {
            elements++; 
        }
        p[i] = elements; 
    }
    for(int i = 0; i < q; i++) {
        int l, r; 
        cin >> l >> r;
        if(l-1 == 0) {
            cout << p[r-1] << endl; 
        } else {
            cout << p[r-1] - p[l-2] << endl; 
        }
    }
}