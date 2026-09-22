#include<iostream>
#include<vector>
using namespace std;

void f(int idx, int sum, int target, vector<int> &arr, vector<int> &path, vector<vector<int>> &ans) {
  if(sum == target) {
    ans.push_back(path);
    return;
  }
  if(idx == arr.size() || sum > target) return; 

  //take 
  path.push_back(arr[idx]);
  f(idx, sum+arr[idx], target, arr, path, ans);
  path.pop_back();
  
  //not take
  f(idx+1, sum, target, arr, path, ans);

}

int main() {
  int n, target; 
  cin >> n >> target; 
  vector<int> arr(n);
  vector<int> path;
  vector<vector<int>> ans;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  f(0, 0, target, arr, path, ans); 
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
  cout << ans[i].size() << " ";
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
}