// Problem: Sort 01
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/H>
// Approach: count the number of zereos

#include<iostream>
using namespace std; 
 
int main() {
    //now the user will select a t value; 
    int t;
    cin >> t; 
    //this can be any value less than 100; ]
    for(int i = 0; i < t; i++) {
        int len; 
    int countzero = 0;          
        cin >> len; 
        int arr[len]; 
        for(int j = 0; j < len; j++){
            cin >> arr[j];
            if(arr[j] == 0) {
                countzero++; 
            }
        }
        for(int j = 0; j < len; j++) {
            if(j<countzero) {
                arr[j] = 0;
                cout << 0; 
            } else {
                arr[j] = 1;
                cout << 1;
            }
            if(j != len-1) cout << " "; 
            
        }
        cout << endl;
    }
    return 0; 
}
//now this will lead us to understand the concept of dynamic arrays. 