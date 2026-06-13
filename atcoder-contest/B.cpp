#include<iostream>
#include<map>
#include<vector>
using namespace std; 

int main() {
  map<int, vector<int>> m;
  int n; 
  cin >> n; 
  for(int i = 1; i <= n; i++) {
    int x, y; 
    cin >> x; 
    for(int j = 1; j <= x; j++) {
      cin >> y; 
      m[y].push_back(i);
    }
  }
  //it is time to print the map;
  for(int i = 1; i <= n; i++) {
    cout << m[i].size() << " "; 
    for(int j = 0; j < m[i].size(); j++) {
      cout << m[i][j] << " "; 
    }
    cout << endl;
  }
}