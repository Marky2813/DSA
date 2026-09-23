#include<iostream>
#include<vector>
using namespace std; 

void f(int idx, vector<int> &arr, string &path) {
  if(idx == arr.size()) {
    cout << path << "\n";
    return; 
  }

  path.push_back('0'+arr[idx]);
  f(idx+1, arr, path);
  path.pop_back();

  f(idx+1, arr, path);
}

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n);
  string path; 
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  f(0, arr, path);
}