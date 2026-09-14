#include<iostream>
#include<vector>
using namespace std;

bool canPlace(int i, int j, vector<vector<char>> &board, char val) {
  int n = 9; 
  //along the same col 
  for(int row = 0; row < n; row++) {
    if(board[row][j] == val) return false;
  }

  //along the same row
  for(int col = 0; col < n; col++) {
    if(board[i][col] == val) return false; 
  }

  //in the same subgrid 
  int sx = (i/3)*3;
  int sy = (j/3)*3;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(board[i+sx][j+sy] == val) {
        return false;
      }
    }
  }
  return true;
}

bool f(int i, int j, vector<vector<char>> &board) {
  int n = 9; 
  if(i == n) return true; 

  if(j == n) return f(i+1, 0, board);

  if(board[i][j] != '.') return f(i, j+1, board);

  for(char val = '1'; val <= '9'; val++) {
  if(canPlace(i, j, board, val)) {
    board[i][j] = val;
    if(f(i, j+1, board)) return true;
    board[i][j] = '.';
  }
}
  return false;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n = 9;
  vector<vector<char>> board(n, vector<char> (n, '.'));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> board[i][j];
    }
  }
  f(0, 0, board);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}