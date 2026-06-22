#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n, q;
  cin >> n >> q; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < q; i++) {
    bool found = false;
    long long element;
    cin >> element; 
    int l = 0; 
    int r = n-1;
    while(l <= r) {
      int mid=(l+r)/2; 
      if(arr[mid] == element) {
        cout << mid+1 << "\n";
        found = true; 
        break; 
      } else if (arr[mid] < element) {
        l = mid+1; 
      } else {
        r = mid-1;
      }
    }
    if(!found) cout << -1 << "\n";
  }
}