#include<iostream>
#include<vector>
using namespace std;

bool rev(int n, vector<long long>& arr) {
  if(n == 1) {
    return true; 
  }
  bool smallAns = rev(n-1, arr);
  if(!smallAns) {
    return false; 
  }
  return arr[n-1] >= arr[n-2];
}

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  } 
  bool ans = rev(n, arr);
  if(ans) {
    cout << "yes";
  } else {
    cout << "no";
  }
}