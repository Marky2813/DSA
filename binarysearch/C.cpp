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
    long long ele; 
    cin >> ele; 
    int firstoccurance = -1; 
    int lastoccurance = -1;
    int l = 0; 
    int r = n-1;  
    while(l<=r) {
      int mid = (l+r)/2; 
      if(arr[mid] == ele) {
        firstoccurance = mid;
        r = mid-1; 
      } else if(arr[mid] > ele) {
        r = mid-1;
      } else {
        l = mid+1;
      }
    }
    l = 0;
    r = n-1;
    while(l<=r) {
      int mid = (l+r)/2; 
      if(arr[mid] == ele) {
        lastoccurance = mid;
        l = mid+1; 
      } else if(arr[mid] > ele) {
        r = mid-1;
      } else {
        l = mid+1;
      }
    }
    if(firstoccurance == -1) {
      cout << -1 << '\n';
    } else {
      cout << firstoccurance+1 << ' ' << lastoccurance+1 << '\n';
    }
  }
}