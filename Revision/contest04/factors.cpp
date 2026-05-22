#include<iostream>
#include<cmath>
using namespace std; 

int main() {
  int x, y;
  cin >> x >> y; 
  int factorsx = 0; 
  int factorsy =0; 
  for(int j = 1; j <  sqrt(x); j++) {
      if(x%j == 0) {
        if(x == j/x) {
        factorsx +=1;
      } else {
          factorsx +=2;
        }
      }
    }
    for(int j = 1; j <  sqrt(y); j++) {
      if(y == j/y) {
        factorsy +=1;
      } else {
          factorsy +=2;
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