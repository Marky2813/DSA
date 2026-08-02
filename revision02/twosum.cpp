#include<iostream>
#include<map>
using namespace std; 

int main() {
  int n; 
  long long sum; 
  cin >> n >> sum; 
  map<long long, int> m; 
  long long pairs = 0; 
  for(int i = 0; i < n; i++) {
    long long x; 
    cin >> x;
    if(m.count(sum-x)) {
    pairs += m[sum-x];
  }
  if(m.count(x)) {
      m[x] = m[x] + 1;
    } else {
      m.insert({x, 1});
    }
  }
  cout << pairs;
}