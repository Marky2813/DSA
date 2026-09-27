#include<iostream>
using namespace std; 

bool checkIthBit(long long n, int i) {
  long long mask = 1LL << i; 
  if(mask&n) {
    return true; 
  } else {
    return false; 
  }

}

int main() {
  long long n; 
  cin >> n; 
  int count = 0; 
  for(int i = 0; i < 63; i++) {
    if(checkIthBit(n, i)) break; 
    count++; 
  }
  cout << count; 
}