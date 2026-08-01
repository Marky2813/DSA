#include<iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n; 
  cin >> n; 
  long long ans = 1;
  while(ans <= n) {
    cout << ans << " ";
    ans = ans * 2;
  }
}