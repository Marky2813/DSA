#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n; 
  long long x; 
  cin >> n >> x; 
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  int l = 0; 
  long long sum = 0;
  int len = INT_MAX; 
  for(int r = 0; r < n; r++) {
    sum += arr[r]; 
    while(sum>x) {
      len = min(len, r-l+1); 
      sum -= arr[l]; 
      l++;
    }
  }
  if(len == INT_MAX) {
    cout << -1;
  } else {
    cout << len;
  }
}