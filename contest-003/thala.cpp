#include<iostream>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t;i++) {
      int n; 
      cin >> n;
      int sum = 0;  
      while(n > 0) {
        sum = sum + n%10; 
        n = n/10; 
      }
      if(sum == 7) {
        cout << "Thala for a reason"; 
      } else {
        cout << "Blocked for no reason"; 
      }
      cout << endl; 
    }
}