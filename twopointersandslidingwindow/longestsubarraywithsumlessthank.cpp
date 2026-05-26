#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n; 
  long long k; 
  cin >> n >> k; 
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long sum = 0; 
  int l = 0; 
  int len = 0; 
  for(int r = 0; r < n; r++) {
    sum += arr[r]; 
    while(sum >= k) {
      sum -= arr[l]; 
      l++; 
    }
    len = max(len, r-l+1); 
  }
  cout << len; 
}