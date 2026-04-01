// Problem: Boundary Traversal
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/671594/problem/H>
// Approach: While loop with directions array

#include<iostream>
using namespace std; 
 
int main() {
    int n, m; 
    cin >> n >> m;
    
    int arr[n][m];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m;j++) {
            cin >> arr[i][j]; 
        }
    }
    
    int direction[4][2] = {{0,1}, {1,0}, {0, -1}, {-1, 0}}; 
    int boundaryElements = n*m - max(0, (n-2)*(m-2)); 
    int visited = 1;
    int i = 0; 
    int j = 0;
    int dir = 0; 
    cout << arr[i][j] << " ";
    while(visited < boundaryElements)  {
        i = i + direction[dir][0];
        j = j + direction[dir][1];
        if(i > n-1 || j > m-1 || i < 0 || j < 0) {
            i = i - direction[dir][0];
        j = j - direction[dir][1];
            dir++;
            
        } else {
            cout << arr[i][j] << " "; 
            visited++; 
    }
}
}
