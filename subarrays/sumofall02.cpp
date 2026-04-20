// Problem: sum of all 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/J>
// Approach: sum O(n^2)


#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    int totalSubArrays = n*(n+1)/2;
    long long sum = 0;
    int index = 0; 
    for(int l = 0; l < n; l++) {
        for(int r = l; r < n; r++) {
            if(l == r) {
                sum = arr[r];
                cout << sum << "\n";  
            } else {
                sum += arr[r];
                cout << sum << "\n"; 
            }
        }
    }
}

