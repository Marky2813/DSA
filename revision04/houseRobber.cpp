#include<iostream> 
#include<vector> 

using namespace std; 

int rob(vector<int> &arr, int n) {
  if(n == 0) return arr[0];

  int prevSum = rob(arr, n-1);
  if(n % 2 != 0) {
    return prevSum;
  } else {
    return prevSum + arr[n];
  } 
}

int main() {
  int n;
  cin >> n; 
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int totalMoney = rob(arr, n-1);
  cout << totalMoney;
}