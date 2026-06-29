#include<iostream>
#include<vector>
using namespace std;
bool allpaintdone(vector<long long>& v, long long mid, int q) {
  long long assignedtime = 0; 
  int assigned = 1;
  for(int i = 0; i < v.size(); i++) {
    assignedtime += v[i];
    if(assignedtime > mid) {
      assignedtime = v[i];
      if(assignedtime > mid) return false; 
      assigned++;
    }
  }
  return assigned <= q;
}

int main() {
  long long sum = 0;
  int n, q;
  cin >> n >> q; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
    sum += arr[i];
  }
  long long ans = -1; 
  long long l = 0; 
  long long r = sum;
  while(l<=r) {
    long long mid = (l+r)/2;
    if(allpaintdone(arr, mid, q)) {
      ans = mid; 
      r = mid - 1; 
    } else {
      l = mid + 1; 
    }
  }
 cout << ans; 
}
