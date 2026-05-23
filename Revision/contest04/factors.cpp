#include<iostream>
#include<cmath>
using namespace std; 

int main() {
  long long x, y;
  cin >> x >> y; 
  long long factorsx = 0; 
  long long factorsy =0; 
  for(int j = 1; j <= sqrt(x); j++) {
      if(x%j == 0) {
        if(j == x/j) {
        factorsx +=1;
      } else {
          factorsx +=2;
        } 
      }
    }
    for(int j = 1; j <= sqrt(y); j++) {
      if(y%j == 0) {
        if(j == y/j) {
        factorsy +=1;
      } else {
          factorsy +=2;
        }
      }
    }

  if(factorsx < factorsy) {
    cout << 'B';
  } else if(factorsx > factorsy) {
    cout << 'A';
  } else {
    cout << "DRAW";
  }
} 