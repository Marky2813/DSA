#include<iostream>
#include<vector>
using namespace std; 

bool canPlace(int x, int y, int n, vector<vector<char>> &board) {
  //check same col
  int i = x; 
  int j = y; 
  while(i >=0) {
    if(board[i][j] == 'Q') {
      return false;
    }
    i--;
  }
  i = x; 
  j = y;
  //check dia1
  while(i >=0 && j >= 0) {
    if(board[i][j] == 'Q') {
      return false;
    }
    i--;
    j--;
  }
  //check dia2
  i = x;
  j = y;
  while(i >=0 && j < n) {
    if(board[i][j] == 'Q') {
      return false;
    }
    i--;
    j++;
  }

  return true; 

}

void f(int i, int n, vector<vector<char>> &board, vector<vector<string>> &ans) {
  if(i == n) {
    vector<string> sol;
    for(int k = 0; k < n; k++) {
      string s;
      for(int l = 0; l < n; l++) s += board[k][l];
      sol.push_back(s);
    }
    ans.push_back(sol);
    return;
  }
  for(int j = 0; j < n; j++) {
    if(canPlace(i, j, n, board)) {
      board[i][j] = 'Q';
      f(i+1, n, board, ans);
      board[i][j] = '.';
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<vector<char>> board(n, vector<char>(n, '.'));
  vector<vector<string>> ans;
  f(0, n, board, ans);

  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    for(auto &row : ans[i]) cout << row << "\n";
    if(i != ans.size()-1) cout << "\n";
  }
}