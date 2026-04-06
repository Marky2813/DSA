// Problem: Second largest 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/A>
// Approach: Easier method: use one for loop. find the largest element and store the previous largest as second largest. 

#include<iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 
    int arr[n]; 
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int largest = arr[0]; 
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    
    int secondlargest = -1; 
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == largest) {
            continue; 
        }
        if(arr[i] > secondlargest) {
            secondlargest = arr[i]; 
        }
    }
    
    cout << secondlargest; 
}