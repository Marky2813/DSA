#include<iostream> 
using namespace std; 

long long setIthBit(long long n, int i) {
  long long mask = 1LL << i; 
  return n|mask; 
}

int main() {
  long long n; 
  int k; 
  cin >> n >> k; 
  for(int i = 0; i < k; i++) {
    n = setIthBit(n, i);
  }
  cout << n; 
}