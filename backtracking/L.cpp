#include<iostream>
#include<string>
#include<vector> 
using namespace std; 

void f(int i, int j, int n, int m, vector<char> &path, vector<vector<int>> &arr,
       vector<vector<bool>> &visited, vector<string> &ans) {
  if (i < 0 || j < 0 || i > n || j > m || arr[i][j] == 0 || visited[i][j]) {
    return;
  }
  if (i == n && j == m) {
    ans.push_back(string(path.begin(), path.end()));
    return;
  }
  visited[i][j] = true;
  path.push_back('D'); f(i+1, j, n, m, path, arr, visited, ans); path.pop_back();
  path.push_back('L'); f(i, j-1, n, m, path, arr, visited, ans); path.pop_back();
  path.push_back('R'); f(i, j+1, n, m, path, arr, visited, ans); path.pop_back();
  path.push_back('U'); f(i-1, j, n, m, path, arr, visited, ans); path.pop_back();
  visited[i][j] = false;
}

int main() {
  int N, M; 
  cin >> N;
  M = N;   
  vector<string> ans; 
  vector<vector<int>> arr(N, vector<int> (M));
  vector<vector<bool>> visited(N, vector<bool> (M, false));
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }
  vector<char> path; 
  f(0, 0, N-1, M-1, path, arr, visited, ans);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  } 
}
