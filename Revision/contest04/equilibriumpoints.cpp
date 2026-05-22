#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;  
    vector<long long> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<long long> sum(n);
    for(int i = 0; i < n; i++) {
       if(i == 0) {
        sum[i] = arr[i]; 
       } else {
         sum[i] = sum[i-1] + arr[i];
       }
    }
    long long eqbpoints = 0; 
    for(int i = 0; i < n; i++) {
       if((sum[i] == sum[n-1] - sum[i-1]) && i > 0) {
          eqbpoints++;
        } else if(sum[i] == sum[n-1]) {
          eqbpoints++;
       }
    }
    cout << eqbpoints;

}