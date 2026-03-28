// Problem: Swap alt
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/K>
// Approach: using temp var and i = i+2

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
        for(int i = 0; i < len - 1; i = i+2) 
        {
            int temp = arr[i]; 
            arr[i] = arr[i+1]; 
            arr[i+1] = temp; 
        }
        for(int i = 0; i < len; i++) {
            cout << arr[i]; 
            if(i != len-1) cout << " "; 
        }
        cout << endl;
    }
} 
//now this will lead us to understand the concept of dynamic arrays. 