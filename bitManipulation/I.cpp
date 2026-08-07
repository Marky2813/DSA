#include<iostream>
using namespace std; 

bool isEven(long long n) {
  long long mask = 1LL << 0;
  if((n&mask) == 0) {
    return true; 
  } else {
    return false; 
  }
}

int main() {
  long long n; 
  cin >> n; 
  if(isEven(n)) {
    cout << "Even";
  } else {
    cout << "Odd";
  }
}