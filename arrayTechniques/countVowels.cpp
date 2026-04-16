// Problem: Range Sum Queries
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/A>
// Approach: creating a prefix sum array

#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    char s[n]; 
    for(int i = 0; i < n; i++) {
        cin >> s[i]; 
    }
    //now let us make the vowels sum array
    long long vcount[n];
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            sum++;
        }
        cout << i << ":" << sum << " "; 
        vcount[i] = sum; 
    }
    cout << endl; 
    int q; 
    cin >> q; 
    for(int i = 0; i < q; i++) {
        int l, r; 
        cin >> l >> r; 
        cout << vcount[2] << l << r;
        if(l-1 == 0) {
      
            cout << vcount[r-1] << endl;
        } else {
            cout << vcount[r-1] - vcount[l-2] << endl; 
        }
    }
}