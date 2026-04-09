#include<iostream>
using namespace std; 

int main() {
    int t; 
    cin >> t;
    int sum = 0, max = 0, min = 0;  
    for(int i = 0; i < t;i++) {
      int n;
      cin >> n; 
      if(i == 0) { 
        max = n; 
        min = n;  
      }
      if(n > max) {
        max = n; 
      } 
      if(min > n) {
        min = n; 
      }
      sum = sum + n;
    }
    int avg = sum/t; 
    cout << sum << " " << max << " " << min << " " << avg;
    return 0;
}