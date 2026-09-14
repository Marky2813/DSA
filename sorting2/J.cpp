// #include<iostream>
// #include<vector>
// using namespace std; 

// void merge(int l, int r, vector<long long> &arr, vector<long long> &temp) {
//   int i = l; 
//   int mid = l+(r-l)/2;
//   int j = mid+1, k = l;
//   while(i<=mid && j<=r) {
//     if(arr[i]<=arr[j]) {
//       temp[k++] = arr[j++];
//     } else {
//       temp[k++] = arr[i++];
//     }
//   }
  
//   while(i <= mid) {
//     temp[k++] = arr[i++];
//   }

//   while(j <= r) {
//     temp[k++] = arr[j++];
//   }

//   for(int i = l; i<=r; i++) {
//     arr[i] = temp[i];
//   }
// }

// void f(int l,int r, vector<long long> &arr, vector<long long> &temp) {
//   if(l==r) return; 
//   int mid = l + (r-l)/2;
//   //merge the left half of the arr
//   f(l, mid, arr, temp);

//   //merge the right half of the arr
//   f(mid+1, r, arr, temp);

//   //merge the two sorted halves
//   merge(l,r,arr,temp);
// }

// int main() {
//   ios_base::sync_with_stdio(false); cin.tie(NULL);
//   int n; 
//   cin >> n; 
//   vector<long long> arr(n), temp(n); 
//   for(int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
//   f(0, n-1, arr, temp);

//   for(int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool cmp(long long a, long long b) {
  return a>b;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<long long> arr(n), temp(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end(), cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}