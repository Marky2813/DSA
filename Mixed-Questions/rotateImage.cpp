// Problem: Rotate Image
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/I>
// Approach: figure out the pattern between the elements initial position and the rotated position. 
#include<iostream>
using namespace std; 
 
int main() {
    int n; 
    cin >> n; 
    int arr[n][n]; 
    
    //take inputs in the 2d array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j]; 
        }
    }
    
    //rotate the matrix and store it in the results array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[(n-1)-j][i]; 
            if(j != n-1) cout << " "; 
        }
        cout << endl; 
    }
}