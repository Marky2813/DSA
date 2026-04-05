// Problem: Bubble Sort
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/E>
// Approach: compare two adjacent elements, as we move the biggest elements is placed at the last, so with each iteration the last few elements need not be checked again. 

#include<iostream>
using namespace std; 
 
int main() {
    int n; 
    cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    //input taken, let's start sorting
    int pass = 0; 
    for(int i = n-1; i >= 1; i--) {
    int swaps = 0; 
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
                swaps++; 
        }
        }
    cout << "Pass " << ++pass << ": "; 
        for(int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << ", swaps = " << swaps; 
        if(swaps == 0) break; 
        cout << endl;
    }
} 