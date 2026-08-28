#include<iostream>
#include<vector>  
using namespace std; 

void f(int open, int close, int n,  vector<char> &path, vector<string> &ans) {
  if(n == open && n == close) {
    string s; 
    for(int i = 0; i < path.size(); i++) {
      s+=path[i];
    }
    ans.push_back(s);
    return; 
  }

  if(open < n) {
    path.push_back('(');
    f(open+1, close, n, path, ans);
    path.pop_back();
  }

  if(open > close) {
    path.push_back(')');
    f(open, close+1, n, path, ans);
    path.pop_back();
  }

}


int main() {
  int n; 
  cin >> n; 
  vector<char> path; 
  vector<string> ans; 
  f(0, 0, n, path, ans);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}