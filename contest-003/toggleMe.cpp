#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    cin >> s; 
    for(int i = 0; i < (int)s.size(); i++) {
      if(s[i] >= 97) {
        s[i] = s[i] - 32; 
      } else {
        s[i] = s[i] + 32;
      }
    }
    cout << s; 
}