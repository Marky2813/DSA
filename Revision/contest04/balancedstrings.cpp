#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;  
    vector<string> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<string> sum(n);
    for(int i = 0; i < n; i++) {
       if(i == 0) {
        sum[i] = arr[i]; 
       } else {
         sum[i] = sum[i-1] + arr[i];
       }
    }
    
}