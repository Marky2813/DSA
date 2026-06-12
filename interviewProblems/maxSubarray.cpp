#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long sum = 0; 
  long long ans = LLONG_MIN;
  for(int i = 0; i < n; i++) {
    if(sum < 0) sum = 0;
    sum += arr[i];
    ans = max(ans, sum);
  }
  cout << ans;
}