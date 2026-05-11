// Problem: Count subarray with sum x
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/M>
// Approach: ya toh that sum is in the prefix sum of a particular part of it has that sumAC

#include<iostream>
#include<map>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    long long x; 
    cin >>  x; 
    long long prefix = 0;
    long long pairs = 0;
    map<long long, int> ps;
    for(int i = 0; i < n; i++) {
        long long element;
        cin >> element; 
        prefix += element; 
        if(prefix == x) {
            pairs++;
        } 
        if(ps.count(prefix-x)) {
            pairs = pairs + ps[prefix-x]; 
        }
        ps[prefix] = ps[prefix] + 1;
    }
    cout << pairs; 
}
