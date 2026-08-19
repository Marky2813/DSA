#include<iostream>
#include<vector>
using namespace std;

long long rev(int n, vector<long long>& arr, long long x) {
  if(n==0) {
    return -1; 
  }
  if(arr[n-1] == x) return n-1; 
  int smallAns = rev(n-1, arr, x);
  return smallAns;  
}

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long x; 
  cin >> x; 
  long long ans = rev(n, arr, x);
  if(ans!=-1) {
  cout << ans+1;
  } else {
  cout << ans; 
  }
}