#include<iostream>
#include<vector> 
#include<climits>
using namespace std; 

int main() {
  int n; 
  cin >> n;
  vector<long long> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >>  arr[i];
  }

  long long sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i]*(i+1)*(n-i);
  }
  cout <<  sum; 
}