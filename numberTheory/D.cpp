#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int q; 
  cin >> q; 
  vector<bool> isPrime(1000001, true);
  isPrime[0] = isPrime[1] = false;

  for(int i = 2; i <= 1000000; i++) {
    for(int j = 2*i; j <= 1000000; j += i) {
      isPrime[j] = false; 
    }
  }
  for(int i = 0; i < q; i++) {
    int n; 
    cin >> n; 
    if(isPrime[n]) {
      cout << "YES\n";
    } else {
      cout << "NO\n"; 
    }
  }
}