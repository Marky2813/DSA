#include<iostream>
#include<cmath>
using namespace std;
 
int main() {
  long long n; 
  cin >> n; 
  long long x, y;
  int primes = 0; 
  for(int  j = 2; j <=n; j++) {
  long long factors = 0;
  for(int i = 1; i <= (int)sqrt(j); i++) {
    if(j%i == 0) {
      x = i; 
      y = j/x; 
      if(x <= y) {
        if(x == y) {
          factors += 1; 
        } else {
          factors += 2; 
        } 
      } else {
        break; 
      }
    }
  }
  if(factors == 2) {
       primes++; 
  }
  }
  cout << primes; 
}