#include<iostream>
using namespace std; 
 
int main() {
    string s, t;
    cin >> s >> t; 
    int i = 0, j = 0; 
    while(i < (int)s.size() && j < (int)t.size()) {
      cout << s[i] << "-" << t[j] << "-";
      i++; 
      j++;  
    }
    while(i < (int)s.size()) {
      cout << s[i]; 
      if(i != (int)s.size() - 1) cout << "-"; 
      i++; 
    }
    while(j < (int)t.size()) {
      cout << t[j]; 
      if(j != (int)t.size() - 1) cout << "-"; 
      j++; 
    }
}