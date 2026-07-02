#include<iostream>
#include<vector>
using namespace std; 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q; 
  cin >> q; 
  vector<bool> isPrime(1000001, true);
  vector<int> count(1000001, 0);
  isPrime[0] = isPrime[1] = false;

  for(int i = 2; i <= 1000000; i++) {
    for(int j = 2*i; j <= 1000000; j += i) {
      isPrime[j] = false; 
    }
  }
  for(int i = 1; i <= 1000000; i++) {
    for(int j = i; j <= 1000000; j += i) {
      count[j]++;
    }
  }
  for(int i = 0; i < q; i++) {
    int n; 
    cin >> n; 
    if(isPrime[count[n]]) {
      cout << "YES\n";
    } else {
      cout << "NO\n"; 
    }
  }
}