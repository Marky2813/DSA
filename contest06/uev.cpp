#include<iostream>
#include<set>
#include<vector> 
using namespace std; 

void uev(int idx, vector<int> &arr, int sum, set<int> &s) {
  if(idx == arr.size()) {
    s.insert(sum);
    return;
  } 

  sum += arr[idx];
  uev(idx+1, arr, sum, s);
  sum -= arr[idx];

  if(idx != 0) {
  sum -= arr[idx];
  uev(idx+1, arr, sum, s);
  sum += arr[idx];
  }

}

int main() {
  int n;
  cin >> n; 
  vector<int> arr(n);
  set<int> s;  
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  uev(0, arr, 0, s);
  cout << s.size();
}