#include<iostream>
#include<vector>
using namespace std; 

int checkIthBit(long long ele, int i) {
  long long mask = 1LL << i; 
  if(ele&mask) {
    return 1; 
  } else {
    return 0; 
  }
}

int main() {
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(long long mask = 0; mask < 1 << n; mask++) {
    for(int i = 0; i < n; i++) {
      if(checkIthBit(mask, i)) {
        cout << arr[i] << " ";
      }
    }
    cout << "\n";
  }
}