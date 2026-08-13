#include<iostream>
using namespace std;

long long sum(long long n) {
  if(n == 1) {
    return 1; 
  }
   return n + sum(n-1);
}

int main() {
  long long n; 
  cin >> n;
  long long ans = sum(n);
  cout << ans;
}