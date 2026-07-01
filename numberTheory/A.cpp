#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector<vector<int>> factors(n+1);
  for(int i = 1; i <= n; i++) {
    for(int j = i; j <= n; j+=i) {
      factors[j].push_back(i);
    } 
  }

  //printing the array
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < factors[i].size(); j++) {
      cout << factors[i][j] << " ";
    }
    cout << endl;
  }

}