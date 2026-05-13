#include<iostream>
using namespace std;
 
int main() {
    int n, q; 
    cin >> n >> q; 
    long long prefix[n];
    long long sum = 0; 
    for(int i = 0; i < n; i++) {
        long long element; 
        cin >> element; 
        sum = sum + element*element; 
        prefix[i] = sum; 
    }
    for(int i = 0; i < q; i++) {
        int l, r; 
        cin >> l >> r; 
        l = l -1; 
        r = r-1;
        if(l == 0) {
            cout << prefix[r];
        } else {
            cout << prefix[r] - prefix[l-1];
        }
        cout << "\n";
    }
}