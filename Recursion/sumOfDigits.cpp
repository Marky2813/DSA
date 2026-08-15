#include<iostream>
using namespace std;

int sum(long long n) {
  if(n == 0) {
    return 0; 
  }
  int current = n%10; 
  n = n/10;
   return current + sum(n);
}

int main() {
  long long n; 
  cin >> n; 
  int ans = sum(n);
  cout << ans;
}