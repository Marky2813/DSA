#include<iostream>
using namespace std; 
 
int main() {
    int n; 
    cin >> n;
    int arr[n][n];  
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> arr[i][j]; 
      }
    }
    long long sumdia = 0;
    long long sumrem = 0; 
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(i == j || (i+j) == n-1) {
          sumdia = arr[i][j] + sumdia;
        } else {
          sumrem = sumrem + arr[i][j];
        }
      }
    }
 
    cout << sumdia << " " << sumrem; 
}