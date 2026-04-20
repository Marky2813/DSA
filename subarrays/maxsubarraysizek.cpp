// Problem: max sub size k
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/N>
// Approach: sliding window
 

#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
    int n, k; 
    cin >> n >> k; 
    long long arr[n]; 
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    long long maxSum = 0;
    
    for(int i = 0; i < k; i++) {
        maxSum += arr[i]; 
    }
    
    long long windowSum = maxSum; 
    for(int i = k; i < n; i++) {
         windowSum += arr[i] - arr[i-k];
         maxSum = max(windowSum, maxSum);
    }
    cout << maxSum;  
}