#include<iostream>
using namespace std;

long long power(int n, int p) {
  if(p == 0) {
    return 1; 
  }
   return power(n, p-1)*n;
}

int main() {
  int n, p; 
  cin >> n >> p; 
  long long ans = power(n, p);
  cout << ans;
}