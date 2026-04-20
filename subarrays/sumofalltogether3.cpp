// Problem: sum of together 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/M
// Approach: sum O(n) || crazy trick 
 


#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    long long arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    long long sum = 0; 
    
    for(long long i = 0; i < n; i++) {
      //i is long long becauase the calculation of occurances was overflowing int. 
        sum = sum + ((i+1)*(n-i))*arr[i]; 
    }
    
    cout << sum; 
} 