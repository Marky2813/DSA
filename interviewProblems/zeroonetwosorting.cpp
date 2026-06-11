#include<iostream>
#include<vector>
using namespace std; 

int swape(int a, int b, vector<int> &arr) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


int main() {
    int n; 
    cin >> n; 
    vector<int> arr(n); 
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int l = 0; 
    int i = 0; 
    int r = n-1;
    while(i <= r) {
      if(arr[i] == 0) {
        swape(i, l, arr);
        i++;
        l++;
      } else if (arr[i] == 1) {
        i++;
      } else {
        swape(i, r, arr);
        r--;
      }
    }
    for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
}