#include<iostream>
#include<vector>
using namespace std; 

#define int long long

void main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n; 
  cin >> n; 

  for(int i = 2; i * i <= n; i++) {
    int count = 0; 
    while(n%i == 0) {
      n = n/i; 
      count++;
    }
    if(count) {
      cout << i << "^" << count << " "; 
    }
  }

  if(n > 1) {
    cout << n << "^" << 1;
  }

}