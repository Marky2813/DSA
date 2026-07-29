#include<iostream>
#include<vector>
#include<set>
using namespace std; 
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n; 
  set<int> factors;
  cin >> n; 
 
  for(long long i = 2; i * i <= n; i++) {
    long long count = 0; 
    while(n%i == 0) {
      n = n/i; 
      count++;
    }
    if(count) {
      factors.insert(i);
    }
  }
 
  if(n > 1) {
    factors.insert(n);
  }

  cout << factors.size() << '\n';

}