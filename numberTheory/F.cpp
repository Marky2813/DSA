#include<iostream>
#include<vector>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n , q; 
  cin >> n >> q; 
  vector<bool> isPrime(n+1, true);
  vector<int> prefixsum(n+1);
  prefixsum[0] = 0; 
  isPrime[0] = isPrime[1] = false;

  for(int i = 2; i <= n; i++) {
    for(int j = 2*i; j <=n; j+=i) {
      isPrime[j] = false;
    }
  }

  for(int i = 1; i <= n; i++) {
    if(isPrime[i] == true) {
      prefixsum[i] = prefixsum[i-1] + 1;
    } else {
      prefixsum[i] = prefixsum[i-1];
    }
  }

  for(int i = 0; i < q; i++) {
    int l, r; 
    cin >> l >> r; 
    if(l == 1) {
      cout << prefixsum[r] << '\n';
    } else {
      cout << prefixsum[r] - prefixsum[l-1] << '\n';
    }
  }

}