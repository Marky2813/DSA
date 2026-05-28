#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n; 
  long long k; 
  cin >> n >> k; 
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long sum = 0; 
  int l = 0; 
  int len = 0; 
  for(int r = 0; r < n; r++) {
    sum += arr[r]; 
    while(sum >= k) {
      sum -= arr[l]; 
      l++; 
    }
    len = max(len, r-l+1); 
  }
  cout << len; 
}

//note that the time complexity is O(n) since both are moving forward. the inner loop executes n times in total. the space complexity is O(1) since we are using only a few variables.so it is n + n for time complexity. 