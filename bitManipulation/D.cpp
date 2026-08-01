#include<iostream>
#include<string>
using namespace std;

long long pow(int n, int i) {
  long long ans = 1;
  for(int j = 0; j < i; j++) {
    ans = ans * n; 
  }
  return ans; 
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long dec = 0; 
  string s; 
  cin >> s; 
  for(int i = 0; i < s.size(); i++) {
    if(s[s.size() - i - 1] == '1') {
      dec += 1*pow(2, i);
    }
  }
  cout << dec;
}