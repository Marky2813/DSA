#include<iostream>
#include<vector> 
using namespace std; 

void f(int i, int j, int n, int m, vector<char> &path, vector<vector<int>> &arr) {
  if(i == n && j == m){
    for(int i = 0; i < path.size(); i++) {
      cout << path[i];
    }
    cout << "\n";
    return; 
  }
  if(i > n || j > m || (arr[i][j] == 1)) {
    return;
  }

  path.push_back('R');
  f(i, j+1, n, m,  path, arr);
  path.pop_back();

  path.push_back('D');
  f(i+1, j, n, m,  path, arr);
  path.pop_back();
}

int main() {
  int N, M; 
  cin >> N >> M;  
  vector<vector<int>> arr(N, vector<int> (M));
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }
  vector<char> path; 
  f(0, 0, N-1, M-1, path, arr);
}
