#include<iostream>
#include<vector>
using namespace std; 

bool isPossible(vector<long long>& vec, long long mid, int k) {
    int placed = 1; 
    int lastIndex=vec[0];
    for(int i = 1; i < vec.size();i++) {
      if(vec[i]-lastIndex >= mid) {
        placed++;
        lastIndex=vec[i]; 
      }
    }
    if(placed >= k) return true; 
    return false; 
}

int main() {
  int n, k;
  cin >> n >> k; 
  vector<long long> arr(n);
  for(int i  = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long ans = -1; 
  long long l = 0; 
  long long r = arr[n-1]-arr[0];
  while(l<=r) {
    long long mid = (l+r)/2;
    if(isPossible(arr, mid, k)) {
      ans = mid; 
      l=mid+1;
    } else {
      r=mid-1;
    }
  }
  cout << ans; 
}