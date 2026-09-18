#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &A, int start, int end) {
  int pivot = A[start];
  int l = start+1; 
  int r = end; 
  while(l <= r) {
    if(A[l] < pivot) {
      l++;
    } else {
      swap(A[l], A[r]);
      r--; 
    }
  }
  swap(A[start], A[r]);
  return r; 
}

void quickSort(vector<int> &A, int l, int r) {
  if (l >= r) return; 
  int pivotIndex = partition(A, l, r); 
  quickSort(A, l, pivotIndex-1);
  quickSort(A, pivotIndex+1, r);
}

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quickSort(arr, 0, n-1);
  for(int i = 0; i < n; i++) {
    cout << arr[i];
  }
}