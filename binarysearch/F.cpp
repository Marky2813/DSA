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
    int x, y; 
    cin >> x >> y; 
    if(x>y) {
        cout << 0 << '\n';
        continue; 
    }
    int indexlessthanx = -1; 
    int indexgreaterthany = -1; 
    int l = 0; 
    int r = n-1;  
    //index of the last element less than x; 
    while(l<=r) {
      int mid = (l+r)/2; 
      if(arr[mid] < x) {
        indexlessthanx = mid;
        l = mid+1; 
      } else {
        r = mid-1;
      }
    }
    l = 0; 
    r = n-1;  
    //index of the first element greater than y; 
    while(l<=r) {
      int mid = (l+r)/2; 
      if(arr[mid] > y) {
        indexgreaterthany = mid;
        r = mid-1;
      } else {
        l = mid+1; 
      }
    }
    if(indexgreaterthany == -1) {
      indexgreaterthany = n;
    }
    cout << indexgreaterthany -  indexlessthanx - 1<< '\n';
  }
}