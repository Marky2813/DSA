#include<iostream>
#include<vector>
using namespace std; 

void f(int i, int j, int n, vector<vector<int>> &arr, vector<vector<string>> &visited, vector<string> &ans, vector<string> &path) {
  if(i == n || j == n || i < 0 || j < 0 || arr[i][j] == 0 || visited[i][j] == "." ) {
    return; 
  }

  if(i == n-1 && j == n-1) {
    string s = "";
    for(int k = 0; k < path.size(); k++) {
      s += path[k];
    }
    ans.push_back(s); 
    return; 
  }
  visited[i][j] = ".";

  path.push_back("D");
  f(i+1, j, n, arr, visited, ans, path);
  path.pop_back();  

  path.push_back("L");
  f(i, j-1, n, arr, visited, ans, path);
  path.pop_back();  

  path.push_back("R");    
  f(i, j+1, n, arr, visited, ans, path);
  path.pop_back();  

  path.push_back("U");  
  f(i-1, j, n, arr, visited, ans, path);
  path.pop_back();  

  visited[i][j] = "";
}



int main() {
  int n; 
  cin >> n; 
  vector<vector<int>> arr(n, vector<int> (n));
  vector<vector<string>> visited(n, vector<string> (n, ""));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  vector<string> path;
  vector<string> ans; 
  f(0, 0, n, arr, visited, ans, path);
  cout << ans.size() << "\n"; 
  for(int i  = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n"; 
  }
}