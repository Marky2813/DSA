#include<iostream>
#include<vector>
using namespace std;

int partition1(vector<int> &A, int start, int end, int random) {
  swap(A[start], A[random]);
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
int partition2(vector<int> &A, int start, int end, int random) {
  int pivot = A[random];
  int l = start; 
  int r = end; 
  while(l <= r) {
    if(l == random) {
      l++;
      continue;
    }
    if(r == random) {
      r--;
      continue;
    }
    if(A[l] < pivot) {
      l++;
    } else {
      swap(A[l], A[r]);
      r--; 
    }
  }
  if(random > l) {
    swap(A[l], A[random]);
    return l; 
  } else if(random < r) {
    swap(A[r], A[random]);
    return r; 
  } else {
    return random;
  } 
}
int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int result2 = partition2(arr, 0, n-1, 2);
  int result1 = partition1(arr, 0, n-1, 2);
  cout << "partition 1 result " << result1 << endl; 
  cout << "partition 2 result " << result2 << endl;
}

// the actual answer was quite simple but we developed something and made it work. exactly like an engineer should do. very well done. 