#include<iostream>
using namespace std; 
 
int main() {
   int n, m; 
   cin >> n >> m;
   int arr[n][m];  
   for(int i = 0; i < n; i++) {
    for(int j = 0 ; j < m; j++) {
      cin >> arr[i][j]; 
    }
   }
   //left col
   for(int i = n-1; i >= 0; i--) {
      if(arr[i][0] == -1) {
        return 0;
      } 
      cout << arr[i][0] << " "; 
   }
   //top row 
   for(int j = 1; j < m ;j++) {
    if(arr[0][j] == -1) {return 0;} 
      cout << arr[0][j] << " "; 
   }
   //right col
   for(int i = 1; i < n; i++) {
      if(arr[i][m-1] == -1) {
        return 0;
      } 
      cout << arr[i][m-1] << " "; 
   }
   //bottom row
   for(int j = m-2; j >=1; j--) {
        if(arr[n-1][j] == -1) {return 0;} 
        cout << arr[n-1][j] << " "; 
   }
}