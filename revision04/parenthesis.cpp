#include<iostream>
#include<vector>
using namespace std; 

void f(int open, int close, int n, string &path, vector<string> &ans) {
  if(open == n && close == n) {
    ans.push_back(path);
    return; 
  }
  if(open < n) {
    path.push_back('(');
    f(open + 1, close, n, path, ans);
    path.pop_back();
  }
  if(close < open) {
    path.push_back(')');
    f(open, close + 1, n, path, ans);
    path.pop_back();
  }
}

int main() {
  int n; 
  string path; 
  vector<string> ans; 
  cin >> n; 
  f(0, 0, n, path, ans);
  cout << ans.size() << "\n"; 
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}