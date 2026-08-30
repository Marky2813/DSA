#include<iostream>
#include<string> 
#include<algorithm>
#include<vector> 
using namespace std; 

void f(vector<int> &arr,vector<bool> &visited,  vector<string> &ans, vector<int> &path) {
  if(path.size() == arr.size()) {
    string s;
    for(int i = 0; i < path.size(); i++) {
      s+= to_string(path[i]);
      s+= " "; 
    }
    ans.push_back(s); 
    return; 
  }

  for(int i = 0; i < arr.size(); i++) {
    if(!visited[i]) {
      path.push_back(arr[i]);
      visited[i] = true; 
      f(arr, visited, ans, path); 
      visited[i] = false; 
      path.pop_back();
    }
  }

}

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n); 
  vector<int> path; 
  vector<string> ans; 
  vector<bool> visited(n, false); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  f(arr, visited, ans, path);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  } 
}