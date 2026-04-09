#include<iostream>
using namespace std; 

int main() {
  string s; 
  cin >> s; 
  int a = 0, b = 0; 
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] == 'a') {
      a++;  
    } else if(s[i] == 'b') {
      b++; 
    }
  }

  if(a == b) {
    cout << "YES"; 
  } else {
    cout << "NO";
  }
}