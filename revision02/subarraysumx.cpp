#include<iostream>
#include<vector> 
#include<map>
using namespace std; 

int main() {
  int n; 
  long long sum; 
  cin >> n >> sum; 
  vector<long long> arr(n);
  map<long long, int> s; 
  long long count = 0;
  for(int i = 0; i < n; i++) {
    long long a; 
    cin >> a;
    if(i == 0) {
      arr[i] = a;
    } else {
    arr[i] = arr[i-1] + a; 
    }
    long long dif = arr[i] - sum;
    if(s.find(dif) != s.end()) {
      count += s[dif];
    }
    if(dif == 0) count++;
    s[arr[i]]++;
    }
    cout << count; 
  }