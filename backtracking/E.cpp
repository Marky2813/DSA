#include<iostream>
#include<vector>
using namespace std; 

void f(int idx, vector<int> &arr, vector<int> &path) {
  if(idx == arr.size()) {
    for(int i = 0; i < path.size(); i++) {
      cout << path[i] << " ";
    }
    cout << "\n";
    return; 
  }

  // take n; 
  path.push_back(arr[idx]);
  f(idx+1, arr, path);
  path.pop_back();

  //not take 
  f(idx+1, arr, path);
}

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n);
  vector<int> path; 
  for(int i = 0; i< n; i++) {
    cin >> arr[i]; 
  }
  f(0, arr, path);
}