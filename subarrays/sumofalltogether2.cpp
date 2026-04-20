// Problem: sum of together 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/L>
// Approach: sum O(n^2) || prefix sum
 

#include<iostream>
using namespace std;
 
#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    long long arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    //let us now create the prefix sum array
    long long sum[n];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            sum[i] = arr[i];
        } else {
            sum[i] = sum[i-1] + arr[i];
        }
    }
    
    long long totalSum = 0;
    for(int l = 0; l < n; l++) {
        for(int r = l; r < n; r++){
            if(l == 0) {
                totalSum += sum[r];
            } else {
                totalSum += (sum[r] - sum[l-1]);
            }
        }
    }
    cout << totalSum; 
}