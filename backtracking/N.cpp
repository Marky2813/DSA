#include<iostream>
#include<vector>
using namespace std;

bool canPlace(int x, int y, int val, vector<vector<int>> &board) {
  for(int j = 0; j < 9; j++)
    if(board[x][j] == val) return false;

  for(int i = 0; i < 9; i++)
    if(board[i][y] == val) return false;

  int sr = (x/3)*3;
  int sc = (y/3)*3;
  for(int i = sr; i < sr+3; i++)
    for(int j = sc; j < sc+3; j++)
      if(board[i][j] == val) return false;

  return true;
}

bool f(int i, int j, vector<vector<int>> &board) {
  if(i == 9) return true;
  if(j == 9) return f(i+1, 0, board);
  if(board[i][j] != 0) return f(i, j+1, board);

  for(int val = 1; val <= 9; val++) {
    if(canPlace(i, j, val, board)) {
      board[i][j] = val;
      if(f(i, j+1, board)) return true;
      board[i][j] = 0;
    }
  }
  return false;
}

int main() {
  int n = 9;
  vector<vector<int>> board(n, vector<int>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char c;
      cin >> c;
      board[i][j] = (c == '.') ? 0 : c - '0';
    }
  }

  if(!f(0, 0, board)) {
    cout << "No solution\n";
    return 0;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) cout << board[i][j];
    cout << "\n";
  }
}