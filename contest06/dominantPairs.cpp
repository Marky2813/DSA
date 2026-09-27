#include<iostream> 
#include<vector> 
#define int long long
using namespace std; 


int merge(vector<long long> &arr, int l, int r) {
  int i = l; 
  int mid = l + (r-l)/2;
  int j = mid+1; 
  int ans = 0; 
  for(int x = i; x < mid+1; x++) {
      while(j <= r && arr[x] > 3*arr[j]) {
        j++;
        ans += mid-x+1;
      }
  }
  j = mid+1;
  vector<long long> temp; 
  while(i <= mid && j <= r) {
    if(arr[i] < arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while(i <= mid) {
    temp.push_back(arr[i]);
      i++;
  }
  while(j <= r) {
    temp.push_back(arr[j]);
      j++;
  }
  int ptr = 0; 
  for(int i = l; i<= r; i++) {
    arr[i] = temp[ptr];
    ptr++;
  }
  return ans; 
}

int dp(vector<long long> &arr, int l, int r) {
  if(l==r) return 0; 
  int mid = l + (r-l)/2;
  int p1 = dp(arr, l, mid); 
  int p2 = dp(arr, mid+1, r);
  int p3 = merge(arr, l, r);
  return p1+p2+p3;
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << dp(arr, 0, n-1);
}