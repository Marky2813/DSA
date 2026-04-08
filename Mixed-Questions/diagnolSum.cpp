// Problem: Diagnol sum
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/H>
// Approach: diagnol elements have the same i, j index

#include<iostream>
using namespace std; 
 
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int arr[n][n]; 
    
    //take input in array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j]; 
        }
    }
    
    for(int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }
    
    cout << sum; 
}