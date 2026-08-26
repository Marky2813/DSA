#include<iostream>
#include<vector>
using namespace std; 

void f(int idx, vector<long long> &arr, vector<long long> &path, long long k, long long sum, vector<vector <long long>>& ans) {
  if(idx == arr.size()) {
    if(sum == k) {
    vector <long long> cur; 
    for(int i = 0; i < path.size(); i++) {
      cur.push_back(path[i]);
    }
    ans.push_back(cur);
  }
    return; 
  }

  // take n; 
  path.push_back(arr[idx]);
  f(idx+1, arr, path, k, sum+arr[idx], ans);
  path.pop_back();

  //not take 
  f(idx+1, arr, path, k, sum, ans);
}

int main() {
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  long long k; 
  cin >> k;
  vector<long long> path; 
  vector<vector <long long>> ans; 
  for(int i = 0; i< n; i++) {
    cin >> arr[i]; 
  }
  f(0, arr, path,k, 0, ans);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    if(ans.size() == 0) cout << " ";
    cout<<"\n";
  } 
}