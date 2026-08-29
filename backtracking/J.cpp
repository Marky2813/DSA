#include<iostream>
#include<string> 
#include<vector> 
using namespace std; 

void f(int idx, int sum, vector<int> &arr, int k, vector<string> &ans, vector<int> &path) {
  if(sum == k) {
    string s; 
    s += to_string(path.size());
    s += " ";
    for(int i = 0; i < path.size(); i++) {
      s+= to_string(path[i]);
      s+= " "; 
    }
    ans.push_back(s); 
    return; 
  }

  if(idx == arr.size() || sum > k) {
    return;
  }

  path.push_back(arr[idx]);
  f(idx, sum+arr[idx], arr, k, ans, path);
  path.pop_back();
  
  f(idx+1, sum, arr, k, ans, path);

}

int main() {
  int n, k; 
  cin >> n >> k; 
  vector<int> arr(n); 
  vector<int> path; 
  vector<string> ans; 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  f(0, 0, arr, k, ans, path);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  } 
}