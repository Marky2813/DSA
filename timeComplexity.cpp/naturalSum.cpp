// Problem: Natural Sum
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/A>
// Approach: formula not for loop. observation. 

#include<iostream>
using namespace std; 
 
int main() {
    long long n; 
    cin >> n; 
    long long sum = (n*(n+1))/2; 
    cout << sum; 
}