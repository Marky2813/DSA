// Problem: Merge two sorted arrays without using sorting 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/H>
// Approach: Did this using two pointers for the arrays and a resultant pointer for the third array. 

#include<iostream>
using namespace std; 
 
int main() {
    int n, m;
    cin >> n >> m;
    int A[n], B[m], C[n+m]; 
    for(int i = 0; i < n; i++) {
        cin >> A[i]; 
    }
    for(int j = 0; j < m; j++) {
        cin >> B[j]; 
    }
    
    int i = 0, j = 0, k = 0; 
    
    while(i < n && j < m) {
        if(A[i] < B[j]) {
            C[k] = A[i]; 
            i++; 
        } else {
            C[k] = B[j]; 
            j++; 
        }
        k++; 
    }
    
    while(i < n) {
        C[k] = A[i]; 
        i++; 
        k++;
    }
    
    while(j < m) {
        C[k] = B[j]; 
        j++; 
        k++;
    }
    
    for(int i = 0; i < n+m; i++) {
        cout << C[i] << " "; 
    }
}