#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n, q; 
  cin >> n >> q; 
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());

  for(int i = 0; i < q; i++) {
    long long ele; 
    cin >> ele; 
    int ans = -1; 
    int l = 0; 
    int r = n-1;  
    while(l<=r) {
      int mid = (l+r)/2; 
      if(arr[mid] < ele) {
        ans = mid;
        l = mid+1; 
      } else {
        r = mid-1;
      }
    }
    cout << n-1-ans << '\n';  
  }
}