#include<iostream>
#include<vector>
using namespace std;

long long rev(int n, vector<long long>& arr) {
  if(n == 1) {
    return arr[0]; 
  }
  long long smallAns = rev(n-1, arr);
  long long ans = min(smallAns, arr[n-1]);
}

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  } 
  long long ans = rev(n, arr);
  cout << ans;
}