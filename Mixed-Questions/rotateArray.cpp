// Problem: Rotate array
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/D>
// Approach: 2 for loops for printing. 

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int j = 0; j < t; j++) {
        int n; 
        cin >> n; 
        int arr[n]; 
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        
        int rotate; 
        cin >> rotate; 
        int result[n]; 
        
        for(int i = 0; i < n; i++) {
            if(i >= rotate) {
                result[i-rotate] =  arr[i];
            } else {
                result[n-rotate+i] = arr[i]; 
            }
        }
        
        for(int i = 0; i < n; i++) {
            cout << result[i];
            if(i != n-1) cout << " "; 
        }
        
        cout << endl; 
    }
}