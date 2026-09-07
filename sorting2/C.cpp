#include<iostream>
#include<vector>
using namespace std;


void merge(vector<long long> &arr, int l, int r) {
  vector<long long> temp; 
  int i = l; 
  int mid = (l+r)/2; 
  int j = mid+1;
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
  cout << "Merge: [" << l << " " << r << "] -> " ; 
  int ptr = 0;
  for(int k = l; k < r+1; k++) {
    arr[k] = temp[ptr];
    cout << temp[ptr] << " ";
    ptr++;
  }
  cout << "\n";
}

void f(vector<long long> &arr, int l, int r) {
  if(l == r) {
    return; 
  }
  int mid = (l+r)/2;
  cout << "Divide: [" << l << " " << r << "]" << "\n"; 
  f(arr, l, mid);
  f(arr, mid+1, r);
  merge(arr, l, r);
}


int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  f(arr, 0, n-1);
}