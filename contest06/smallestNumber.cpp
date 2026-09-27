#include<iostream> 
#include<vector> 
#include<algorithm>
#include<string> 
using namespace std; 

bool cmp(string &a, string &b) {
  return a+b < b+a;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<string> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end(), cmp);
  string s; 
  for(int i = 0; i < n; i++) {
    s+=arr[i];
  }
  cout << s; 
}