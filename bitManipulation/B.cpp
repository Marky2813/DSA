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
  while(n > 0) {
    if(cur <= n) {
      cout << cur << " ";
      n = n - cur;
    }
    cur = cur/2;
  } 
}