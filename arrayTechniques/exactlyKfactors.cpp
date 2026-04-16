// Problem: Exactly k factors
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/F>
// Approach: creating a prefix sum array for the number of elements having k factors.  nlogn time complexity. 

#include<iostream>
#include<cmath>
using namespace std;
 
int main() {
    int n, q, k;
    cin >> n >> q >> k;
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    //now let us calculate prefix elements array having sum 10
    int elements = 0;
    int p[n]; 
    for(int i = 0; i < n; i++) {
        int current = arr[i]; 
        int factors = 0; 
        for(int i = 1; i <= sqrt(current); i++) {
            int x, y;
            if(current%i == 0){
                x = i; 
                y = current/i; 
                if(x == y) {
                    factors += 1; 
                } else {
                    factors += 2; 
                }
            }
        }
        if(factors == k) {
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