// Problem: Print all sub arrays
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/H>
// Approach: 3 for loops, 0(n^3)

#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    for(int l = 0; l < n; l++) {
        for(int r = l; r < n; r++) {
            for(int i = l; i <= r; i++) {
                cout << arr[i] << " "; 
            }
            cout << endl; 
        }
    }
}