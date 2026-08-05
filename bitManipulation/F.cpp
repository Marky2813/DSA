#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long bitAnd = arr[0], bitOr = arr[0], bitXor = arr[0];
  for(int i = 1; i < n; i++) {
    bitAnd &= arr[i];
    bitOr |= arr[i];
    bitXor ^= arr[i];
  }
  cout << bitAnd << " " << bitOr << " " << bitXor;
}