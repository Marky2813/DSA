#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<long long> arr(n);
  map<long long, int> m;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long count = 0;
  int l = 0; 
  for(int r = 0; r < n; r++) {
    m[arr[r]] += 1; 
    while(m.size() > k) {
      m[arr[l]] -= 1; 
      if(m[arr[l]] == 0) {
        m.erase(arr[l]);
      } 
      l++;
    }
    if(m.size() <= k) {
      count += r-l+1;
    } 
  }
  cout << count << endl;
}