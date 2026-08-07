#include<iostream>
using namespace std; 

bool checkIthBit(long long n, int i) {
  long long mask = 1LL << i;
  if((n&mask) == 0) {
    return false; 
  } else {
    return true; 
  }
}

int main() {
  long long n; 
  cin >> n; 
  int count = 0;
  for(int i = 62; i >= 0; i--){
    if(checkIthBit(n, i)) count++;
  }
  cout<< count; 
}