#include<iostream>
#include<vector>
using namespace std;


int main() {
  int n, m;
  cin >> n >> m;
  vector<long long> arr1(n);
  vector<long long> arr2(m);
  for(int i = 0; i < n; i++) {
    cin >> arr1[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> arr2[i];
  }
  vector<long long> temp; 
  int i = 0; 
  int j = 0; 
  while(i < n && j < m) {
    if(arr1[i] <= arr2[j]) {
      temp.push_back(arr1[i]);
      i++;
    } else {
      temp.push_back(arr2[j]);
      j++;
    }
  }

  while(i < n) {
      temp.push_back(arr1[i]);
      i++;
  }

  while(j < m) {
      temp.push_back(arr2[j]);
      j++;
  }

  for(int k = 0; k < temp.size(); k++) {
    cout << temp[k] << " ";
  }
}