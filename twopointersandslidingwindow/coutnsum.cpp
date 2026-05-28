#include<iostream>
#include<map>
#include<vector>
using namespace std; 

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> arr(n); 
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    long long count = 0; 
    long long sum = 0; 
    int l = 0; 
    for(int r = 0; r < n; r++) {
      //s.size less than or equal to 2.
      sum += arr[r];    
      while(sum >= k) {
        sum -= arr[l];
        l++; 
      } 
      if(sum < k) {
        count += r-l+1;
      }
    }
    cout << count << endl;
}