// Problem: Longest word
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/J>
// Approach: to be solved but the direction array approach did work out so we know what not to do 

#include<iostream>
using namespace std; 
 
int main() {
    int n, m; 
    cin >> n >> m;
    int arr[n][m];
    int printed = 0, i = 0, j = 0;
    int totalElements = n*m;
    int current = 0;
    int count = 0; 
    int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1, 0}}; 
    
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }
    
    int min_i = 0; 
    int min_j = 0; 
    
    
    while(printed < totalElements) {
        cout << arr[i][j]; 
        printed++;
        count++; 
        if(printed != totalElements) cout << " "; 
        i = i + dir[current][0]; 
        j = j + dir[current][1];
        if(i == n || j == m || i < min_i || j < min_j) {
            i = i - dir[current][0]; 
        j = j - dir[current][1];
            current++;
            i = i + dir[current][0]; 
        j = j + dir[current][1];
        }
        if(count == n*m - max(0, (n-2)*(m-2))) {
            i = i - dir[current][0]; 
        j = j - dir[current][1];
            current = 0;
            count = 0; 
            n = n - 1;
            m = m - 1;
            min_i++; 
            min_j++;
            i = i + dir[current][0]; 
        j = j + dir[current][1];
        }
    }
    
}