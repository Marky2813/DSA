#include<iostream>
#include<vector>
#include<cmath>
#include<set>
using namespace std; 

int main() {
    int n;
    set<long long> s; 
    cin >> n;  
    vector<long long> arr(n); 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<long long> visitors(n);
    for(int i = 0; i < n; i++) {
       s.insert(arr[i]); 
       visitors[i] = s.size();
    }
    for(int i = 0; i < n; i++) {
       if(i != n-1) {
        cout << visitors[i] << " "; 
       } else {
        cout << visitors[i]; 
       }
    }  
} 