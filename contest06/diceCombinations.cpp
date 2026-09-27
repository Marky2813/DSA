#include<iostream>
#include<vector> 
using namespace std; 

void dc(int n, vector<int> &path, int sum) {
  if(sum == n) {
    for(int i = 0; i < path.size(); i++) {
      cout << path[i] << " ";
    }
    cout << "\n";
    return; 
  }

  if(sum > n) return; 

  path.push_back(1);
  dc(n, path, sum+1);
  path.pop_back();

  path.push_back(2);
  dc(n, path, sum+2);
  path.pop_back();

  path.push_back(3);
  dc(n, path, sum+3);
  path.pop_back();

  path.push_back(4);
  dc(n, path, sum+4);
  path.pop_back();

  path.push_back(5);
  dc(n, path, sum+5);
  path.pop_back();

  path.push_back(6);
  dc(n, path, sum+6);
  path.pop_back();
}

int main() {
  int n; 
  cin >> n; 
  vector<int> path;
  dc(n, path, 0);
}