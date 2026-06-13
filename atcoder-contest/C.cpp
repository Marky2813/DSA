#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector<vector<int>> cd(n);
  for(int i = 0; i < n; i++) {
    int x, y; 
    cin >> x >> y; 
    cd[i] = {x, y};
  }
  int count = 0; 
  for(int i = 0; i < n; i++) {
    //get points 
    vector<int> point = cd[i]; 
    bool contains = false; 
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      } else {
        if(cd[j][0] <= point[0] && cd[j][1] <= point[1]) {
          contains = true; 
        }
      }
    }
    if(!contains) count++;
  }
  cout << count; 
}