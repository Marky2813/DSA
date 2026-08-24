#include<iostream>
#include<vector> 
using namespace std; 

void climb(int cur, int n, int k, vector<int>& path) {
  if(cur == n) {
    for(int i = 0; i < path.size(); i++) {
      cout << path[i] <<" ";
    }
    cout << "\n";
    return;
  } 
  if(cur > n) {
    return; 
  }
  for(int i = 1; i <= k; i++)
  {
  path.push_back(i);
  climb(cur+i, n, k, path);
  path.pop_back();
}
}

int main() {
  int n, k; 
  cin >> n >> k; 
  vector<int> path; 
  climb(0, n, k, path);
}