#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n; 
  cin >> n; 
  long long cur = 1;
  while(cur <= n) {
    cur = cur * 2;
  }
  cur = cur / 2;
  if (n == 0) {
    cout << 0;
  } 
  while(cur >= 1) {
    if(cur <= n) {
      cout << 1;
      n = n - cur;
    } else {
      cout << 0;
    }
    cur = cur/2;
  }
}