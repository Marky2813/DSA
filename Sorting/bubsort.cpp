#include<iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    int sorted = 1;
    int pass; 
    while(pass != 0) {
        pass = 0; 
        for(int i = 0; i < n-sorted; i++) {
             if(arr[i] > arr[i+1]) {
                 int temp = arr[i]; 
                 arr[i] = arr[i+1];
                 arr[i+1] = temp;
                 pass++; 
                }
              }
        sorted++; 
    }
    for(int i = 0; i < n; i++) {
      cout << arr[i]; 
    }
}

//what we did earlier was to move the for loop from n-1 to 1; uske andar ek aur loop which goes till i; 