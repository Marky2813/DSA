#include<iostream>
#include<vector>
using namespace std; 

bool checkIthBit(long long n, int i) {
  long long mask = 1LL << i; 
  if((n&mask) == 0) {
    return false; 
  } else {
    return true; 
  }
}

long long setIthBit(long long n, int i) {
  long long mask = 1LL << i; 
  return n|mask; 
}

int main() {
  int n; 
  cin >> n; 
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  int ans = 0;
  for(int j = 0; j < 32; j++) {
    int sum = 0; 
    for(int i = 0; i < n; i++) {
      if(checkIthBit(arr[i], j)) {
        sum++;
      }
    }
    if(sum%3 != 0) {
      ans = setIthBit(ans, j); 
    } 
  }
  cout << ans; 
}