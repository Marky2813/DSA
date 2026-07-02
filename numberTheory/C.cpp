#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector<bool> isPrime(n+1, true);
  isPrime[0] = isPrime[1] = false;

  for(int i = 2; i <= n; i++) {
    for(int j = 2*i; j <= n; j += i) {
      isPrime[j] = false; 
    }
  }
  int count = 0;
  for(int i = 1; i <= n; i++) {
    if(isPrime[i]) {
      cout << i << ' ';
      count++;
    }
  }
  cout << '\n' << count; 
}