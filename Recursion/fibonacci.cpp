#include<iostream>
using namespace std;

int sum(long long n) {
  if(n == 1) {
    return 0; 
  }
  if(n == 2) {
    return 1;
  }
   return sum(n-1)+ sum(n-2);
}

int main() {
  long long n; 
  cin >> n; 
  int ans = sum(n);
  cout << ans;
}