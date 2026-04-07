// Problem: Sum Of Digits 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/E>
// Approach: very interesting string based way of creating the string and then extracting digits from it 

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++) {
        int n; 
        cin >> n; 
        int arr[n]; 
        
        for(int j = 0; j < n; j++) {
            cin >> arr[j]; 
            
        }
        
        int results[n]; 
        int index = 0; 
        int countZeros = 0; 
        
        for(int j = 0; j < n; j++) {
            if(arr[j] == 0) {
                countZeros++; 
                continue; 
            }
            results[index++] = arr[j]; 
        }
        
        while(countZeros > 0) {
            results[index++] = 0; 
            countZeros--; 
        }
        
        for(int j = 0; j < n; j++) {
            cout << results[j];
            if(i != n-1) cout << " ";
        }
        
        cout << endl; 
    }
    
    
}