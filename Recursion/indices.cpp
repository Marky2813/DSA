#include<iostream>
#include<vector>
using namespace std;

long long indices(int n, vector<long long>& arr, long long x) {
  if(n==0) {
    return -1; 
  }
  int smallAns = indices(n-1, arr, x);
  if(arr[n-1] == x) {
    cout << n << " "; 
    return 0;
  }
  if(smallAns == 0) {
    return 0;
  } else {
    return -1;
  }
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
  long long ans = indices(n, arr, x);
  if(ans==-1) {
  cout << ans;
  }
}