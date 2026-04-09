#include<iostream>
using namespace std; 
 
int main() {
    int n,m; 
    cin >> n >> m;
    char s = 'a'; 
    int x = 1; 
    bool toggle = false;  
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(toggle) {
          cout << s;
          if(s == 'z') {
            s = 'a'; 
          } else {
            s++; 
          }
          toggle = !toggle;
        } else {
          cout << x; 
          if(x == 9) {
            x = 1; 
          } else {
            x++; 
          }
          toggle = !toggle; 
        }
        
      }
      cout << endl; 
    } 
 
}