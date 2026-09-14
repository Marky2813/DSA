#include<iostream>
#include<vector> 
using namespace std; 

bool canPlace(int i , int j, int n, vector<vector<char>> &board) {
  int row = i; 
  int col = j; 

  while(row >= 0) {
    if(board[row][col] == 'Q') return false; 
    row--;
  }
  row = i; 

  while(row >= 0 && col >= 0) {
    if(board[row][col] == 'Q') return false; 
    row--;
    col--; 
  }

  row = i; 
  col = j; 
  while(row >= 0 && col < n) {
    if(board[row][col] == 'Q') return false; 
    row--;
    col++; 
  }

  return true; 
}

void f(int i, vector<vector<char>> &board, vector<vector<string>> &ans, int n) {
  if(i == n) {
    vector<string> sol; 
    for(int x = 0; x < n; x++) {
      string s; 
      for(int y = 0; y < n; y++) {
        s +=board[x][y];
      }
      sol.push_back(s); 
    }
    ans.push_back(sol); 
    return; 
  }
  for(int j = 0; j < n; j++) {
    if(canPlace(i, j, n, board)) {
      board[i][j] = 'Q';
      f(i+1, board, ans, n);
      board[i][j] = '.';
    }
  }
}
int main() {
  int n; 
  cin >> n; 
  vector<vector<char>>  board(n, vector<char>(n, '.'));
  vector<vector<string>> ans;
  f(0, board, ans, n);
  cout << ans.size() << "\n"; 
  for(int i = 0; i < ans.size(); i++) {
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j];
      cout << "\n";  
    }
    if(i != ans.size()-1) cout << "\n"; 
  }
}