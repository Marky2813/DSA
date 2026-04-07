// Problem: Check array rotation 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/C>
// Approach: ascending order break 

#include<iostream>
using namespace std;
 
int main() {
    int t; 
    cin >> t; 
    for(int j = 0; j < t; j++) {
    int n; 
    cin >> n; 
    int arr[n]; 
    for(int i = 0; i < n;i++) {
        cin >> arr[i]; 
    }
    int rotation = 1; 
    for(int i = 0; i < n-1; i++) {
        if(arr[i] < arr[i+1]) {
            rotation++; 
        } else {
            cout << rotation <<endl;
            break; 
        }
    }
    if(rotation == n) {
        cout << 0 <<endl;
    }
    }
}