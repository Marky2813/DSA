#include<iostream>
using namespace std; 

int a, b; 

int* f(int* x, int* y) {
  if(*x > *y) return x;
  return y;
}

int main() {
  a = 3;
  b = 5;
  int* x = f(&a, &b);
  cout << *x << endl;
  *x = 10;
  cout << b << endl;
}