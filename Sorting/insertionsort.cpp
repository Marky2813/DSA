// Problem: Insertion Sort
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/F>
// Approach: start with a single element as the sorted part and the remaining array from i = 1 as the unsorted part; 

#include<iostream>
using namespace std; 
 
int main() {
    int n;
    cin >> n; 
    int arr[n]; 
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int pass = 0; 
    for(int i = 1; i < n; i++) {
        int shift = 0; 
        int temp = arr[i]; 
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
                arr[j] = temp;
                shift++; 
            } else {
                break; 
            }
        }
        cout << "Pass " << ++pass << ": "; 
        for(int k = 0; k < n; k++) {
            cout << arr[k] << " "; 
        }
        cout << ", ";
        for(int k = 0; k < i+1; k++) {
            cout << arr[k] << " "; 
        }
        cout << "| "; 
        for(int k = i+1; k < n; k++) {
            cout << arr[k] << " "; 
        }
        cout << ", shifts = " << shift << endl; 
    }
}