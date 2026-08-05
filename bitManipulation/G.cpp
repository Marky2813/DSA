#include<iostream>
using namespace std; 

int main() {
  long long n; 
  int q; 
  cin >> n >> q; 
  for(int i = 0; i < q; i++) {
    int t, j; 
    cin >> t >> j; 
    long long mask = 1LL << j; 
    if(t == 1) {
      if((n&mask) == 0) {
        cout << "NO" << "\n";
      } else {
        cout << "YES" << "\n";
      }
    } else if(t == 2) {
      n = n|mask;
      cout << n << "\n";
    } else if(t == 3) {
      n = n&(~mask);
      cout << n << "\n";
    } else { 
      n = n^mask;
      cout << n << "\n";
    }
  }
}