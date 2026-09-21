#include<iostream>
#include<string> 
#include<vector>
using namespace std; 

void permutation(int n, vector<int> &arr, vector<string> &ans, vector<bool> &visited, vector<int>  &path) {
  if(path.size() == n) {
    string s;
    for(int x : path) {
      s += to_string(x) + " ";
    }
    ans.push_back(s);
    return; 
  }
  for(int i = 0;i < n; i++) {
    if(!visited[i]) {
      visited[i] = true; 
      path.push_back(arr[i]); 
      permutation(n, arr, ans, visited, path);
      path.pop_back();
      visited[i] = false;
    }
  }
}

int main() {
  int n; 
  vector<int> arr(n);
  vector<string> ans; 
  vector<bool> visited(n);
  vector<int>  path; 
  cin >> n; 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  permutation(n, arr, ans, visited, path);
  cout << ans.size() << endl;
  for(const string &s : ans) {
    cout << s << endl;
  }
}