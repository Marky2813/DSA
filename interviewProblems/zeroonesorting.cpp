#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int l = 0; 
  int r = n-1; 
  while(l <= r) {
    if(arr[l] == 1) {
      int temp = arr[l];
      arr[l] = arr[r];
      arr[r] = temp;
      r--; 
    } else {
      l++;
    }
  }

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}