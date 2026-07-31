#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int n; 
  cin >> n; 
  vector<int> arr(n+1, 0);
  for(int i = 2; i <= n; i++) {
    if(arr[i] != 0) continue; 
    for(int j = i; j <= n; j+=i) {
      if(j%i == 0) {
        arr[j]++;
      }
    }
  }

  int count = 0;
  for(int i = 0; i <=n; i++) {
    if(arr[i] == 2) count++;
  }
  cout << count; 

}