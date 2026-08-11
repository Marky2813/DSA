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
  long long xr = 0; 
  for(int i=0; i<n; i++) {
    cin >> arr[i]; 
    xr ^= arr[i]; 
  }
  int pos = -1; 
  for(int i = 0; i < 64; i++) {
    if(checkIthBit(xr, i) == 1) {
      pos = i; 
      break;
    }
  }
  long long ans1 = 0; 
  long long ans2 = 0; 
  for(int i = 0; i < n; i++) {
    if(checkIthBit(arr[i], pos) == 1) {
      ans2 ^= arr[i]; 
    } else {
      ans1 ^= arr[i]; 
    }
  }
  long long smaller = min(ans1, ans2); 
  long long greater = max(ans1, ans2); 

  cout << smaller << " " << greater;

}