// Problem: Selection Sort
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/D>
// Approach: pass through the array and find the minimum element, replace that element with the first element of that pass.

#include<iostream>
using namespace std; 
 
int main() {
    int size; 
    cin >> size;
    int arr[size]; 
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }
    
    for(int i = 0; i < size-1; i++) {
        int temp = arr[i];
        int min = i; 
        for(int j = i; j < size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
    
    arr[i] = arr[min]; 
    arr[min] = temp; 
        //Pass i: array_after_swap , min_selected = x
    
    cout << "Pass " << i+1 << ": ";
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }
    cout << ", " << "min_selected = " << arr[i] << endl;
 
}
}