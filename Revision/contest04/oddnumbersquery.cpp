#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;  
    vector<long long> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<long long> sum(n);
    for(int i = 0; i < n; i++) {
       if(i == 0) {
        sum[i] = arr[i]; 
       } else {
         sum[i] = sum[i-1] + arr[i];
       }
    }
    for(int i = 0; i < q; i++) {
      int l, r; 
      cin >> l >> r;
      l = l - 1;
      r = r - 1; 
      long long checksum = 0; 
      if(l != 0) {
        checksum = sum[n-1] - (sum[r] - sum[l-1]); 
      } else {
        checksum = sum[n-1] - sum[r]; 
      }
      if(checksum % 2 == 0) {
        cout << "NO" << '\n';  
      } else {
        cout << "YES" << '\n'; 
      }
    }
}