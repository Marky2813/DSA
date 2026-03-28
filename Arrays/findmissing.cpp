// Problem: Find missing num
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/L>
// Approach: count the count 

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++) {
        int len; 
        cin >> len; 
        int arr[len]; 
        for(int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < len; i++) 
        {
            int count = 1;
            for(int j = 0; j < len; j++) {
                if(i == j) continue; 
                if(arr[i] == arr[j]) {
                    count = 2;
                }
            }
            if(count != 2) {
                cout << arr[i]; 
                break;
            }
        }
    }
} 
