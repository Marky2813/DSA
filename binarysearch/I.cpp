#include<iostream>
#include<vector>
using namespace std;

bool possible(vector<long long>& v, long long mid, int q) {
  long long prev = v[0];
  int inserted = 1; 
  for(int i = 1; i < v.size(); i++) {
    if(v[i] - prev >= mid) {
      inserted++;
      prev = v[i];
    }
   }
   return inserted >= q;
}

int main() {
  int n, q;
  cin >> n >> q; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  long long ans = -1; 
  long long l = 0; 
  long long r = arr[n-1] - arr[l];
  while(l<=r) {
    long long mid = (l+r)/2;
    if(possible(arr, mid, q)) {
      ans = mid; 
      l = mid + 1; 
    } else {
      r = mid - 1; 
    }
  }
 cout << ans; 
}
