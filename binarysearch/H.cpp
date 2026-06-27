//find the largest element in the array which is less than or equal to x i.e the last index less than or equal to x. 
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
      if(arr[mid] <= ele){
        ans = mid; 
        l = mid+1;
      } else {
        r = mid-1;
      }
    }
    if(ans == -1) {
      cout << ans << '\n';
    } else {
      cout << arr[ans] << '\n';
    }
  }
}