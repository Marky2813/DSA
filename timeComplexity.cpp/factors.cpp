#include<iostream>
using namespace std;

int main() {
  long long n; 
  cin >> n; 
  long long factors = 0;
  if(n == 1) factors = 1; 
  long long x, y;  
  for(int i = 1; i < n/2; i++) {
    if(n%i == 0) {
      x = i; 
      y = n/x; 
      if(x <= y) {
        if(x == y) {
          factors += 1; 
        } else {
          factors += 2; 
        } 
      }
    }
  }
  cout << factors; 
}