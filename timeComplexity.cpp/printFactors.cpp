#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
  long long n; 
  cin >> n; 
  long long x, y;
  vector<long long> factors; 
  for(int i = 1; i <= (int)sqrt(n); i++) {
    if(n%i == 0) {
      x = i; 
      y = n/x; 
      if(x <= y) {
        if(x == y) {
          factors.push_back(x);
        } else {
          factors.push_back(x);
          factors.push_back(y); 
        } 
      } else {
        break; 
      }
    }
  }
  sort(factors.begin(), factors.end()); 
  for(long long x: factors) {
      cout << x << " "; 
  }
} 