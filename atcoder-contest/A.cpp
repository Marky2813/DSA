#include<iostream>
#include<string>
using namespace std; 

int main() {
  string s, output;
  cin >> s; 
  for(int i = 0; i < s.size(); i++) {
    if(s[i] >= 97 && s[i] <= 122) {
      continue; 
    } else {
      output += s[i];
    }
  }
  cout << output << endl;
}