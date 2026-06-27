//find the smallest number in the array which is greater than or equal to x i.e the first index greater than x
#include<iostream>
#include<algorithm>
#include<vector>
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
    int l = 0; 
    int ans = -1; 
    int r = n-1; 
    while(l <= r) {
      int mid = (l+r)/2;
      if(arr[mid] >= ele){
        ans = mid; 
        r = mid-1;
      } else {
        l = mid+1;
      }
    }
    if(ans == -1) {
      cout << ans << '\n';
    } else {
      cout << arr[ans] << '\n';
    }
  }
}