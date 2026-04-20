// Problem: sum of all 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/I>
// Approach: sum O(n^3)


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
            //we can say that for every new value of r we get a subarray. 
            int sum = 0; 
            for(int i = l; i <= r; i++) {
                 sum += arr[i]; 
            }
            cout << sum << endl; 
        }
    }
}
