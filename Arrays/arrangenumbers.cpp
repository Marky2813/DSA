// Problem: Arrange the numbers
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/J>
// Approach: starting and ending pointers

#include<iostream>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int i = 0; i < t; i++) {
        int input; 
        cin >> input; 
        int arr[input]; 
        int index = 1; 
        for(int i = 1; i <= input; i++) {
            if(i % 2 != 0) {
                arr[i-index] = i;
            } else {
                arr[input - index] = i; 
                index++; 
            }
        }
        for(int i = 0; i < input; i++) {
            cout << arr[i]; 
            if(i != input - 1) cout << " "; 
        }
        cout << endl;
    }
}
//now this will lead us to understand the concept of dynamic arrays. 