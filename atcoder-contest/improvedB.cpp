#include<iostream>
#include<vector>
using namespace std;
int main() {
  int n, m, a[105][105];
  vector<int> v[105]; 
  cin >> n; 
  for(int i = 1; i <= n; i++) {
    cin >> m;
    for(int j = 1; j <= m; j++) {
      cin >> a[i][j]; 
      v[a[i][j]].push_back(i); 
    }
  }
  for(int i = 1; i<= n; i++) {
    cout << v[i].size() << " "; 
    for(auto j: v[i]) {
      cout << j << " ";
    } 
    cout << "\n"; 
  }}