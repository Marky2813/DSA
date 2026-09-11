#include<iostream>
#include<vector>
using namespace std;

int merge(vector<long long> &arr, int l, int r) {
  vector<long long> temp; 
  cout << l << " " << r << "\n";
  int i = l; 
  int mid = (l+r)/2; 
  int j = mid+1;
  int ans = 0; 
  for(int i = l; i <= mid; i++) {
    while(j <= r && arr[i] > 2 * arr[j]) {
      cout << "the indexes are (" << i << ", " << j << ") and the numbers are (" << arr[i] << ", " << arr[j] << ")" << "\n";
      j++;
      ans += (mid - i + 1);
  }
  }
  j = mid+1;
  while(i < (mid+1) && j < (r+1)) {
    if(arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while(i < (mid+1)) {
      temp.push_back(arr[i]);
      i++;
  }

  while(j < (r+1)) {
      temp.push_back(arr[j]);
      j++;
  }
  int ptr = 0;
  for(int k = l; k < r+1; k++) {
    arr[k] = temp[ptr];
    ptr++;
  }
  return ans; 
}

int f(vector<long long> &arr, int l, int r) {
  if(l == r) {
    return 0; 
  }
  int mid = (l+r)/2;

  int ans1 = f(arr, l, mid);
  int ans2 = f(arr, mid+1, r);
  int ans3 = merge(arr, l, r);
  return ans1 + ans2 + ans3;
}


int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int ans = f(arr, 0, n-1);
  cout << ans;
}