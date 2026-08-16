#include<iostream>
#include<vector>
using namespace std;

void rev(int n, vector<long long>& arr) {
  if(n == 0) {
    return; 
  }
   cout << arr[n-1] << " ";
   rev(n-1, arr);
}

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  } 
  rev(n, arr);
}