#include<iostream>
#include<vector> 
using namespace std; 

void f(int i, int j, int n, int m, vector<char> &path) {
  if(i == n && j == m){
    for(int i = 0; i < path.size(); i++) {
      cout << path[i];
    }
    cout << "\n";
    return; 
  }
  if(i > n || j > m) {
    return;
  }

  path.push_back('R');
  f(i, j+1, n, m,  path);
  path.pop_back();

  path.push_back('D');
  f(i+1, j, n, m,  path);
  path.pop_back();
}

int main() {
  int N, M; 
  cin >> N >> M;  
  vector<char> path; 
  f(1, 1, N, M, path);
}
