#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n, q; 
  cin >> n >> q; 
  vector<long long> sqsum(n, 0); 
  for(int i = 0; i < n; i++) {
    long long x; 
    cin >> x;
    if(i == 0) {
      sqsum[i] = x*x;
      continue;
    }  
    sqsum[i] = sqsum[i-1] + x*x;
  }
  for(int i = 0; i < q; i++) {
    int l, r; 
    cin >> l >> r; 
    l--; 
    r--; 
    if(l == 0) {
      cout << sqsum[r] << "\n";
    } else {
      cout << sqsum[r] - sqsum[l-1] << "\n"; 
    }
  }
}