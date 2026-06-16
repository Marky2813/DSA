#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector<array<int, 2>> v(n+1);
  for(int i = 1; i <= n; i++) {
    int x, y; 
    cin >> x >> y; 
    v[i] = {x, y};
  }
  sort(v.begin(), v.end());
  int minimum = INT_MAX; 
  int count = 0; 
  for(int i = 1; i <= n; i++) { 
    if(minimum > v[i][1]) {
      count++; 
      minimum = v[i][1];
    }
  }
  cout << count; 
}