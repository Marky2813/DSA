#include<iostream>
#include<vector>
using namespace std;

long long rev(int n, vector<long long>& arr) {
  if(n == 1) {
    return arr[0]; 
  }
  long long smallAns = rev(n-1, arr);
  if(smallAns == 0) {
    return 0; 
  }
  if(smallAns < arr[n-1]){
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  } 
  long long ans = rev(n, arr);
  if(ans == 0) {
    cout << "no";
  } else {
    cout << "yes";
  }
}