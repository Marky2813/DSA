#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
  int n, k; 
  cin >> n >> k; 
  vector<long long> arr(n);
  map<long long, int > m; 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  int vowels = 0; 
  for(int i = 0; i < k; i++) {
    m[arr[i]] += 1;  ;
  }  
  cout << m.size() << " ";
  for(int i = k; i < n; i++) {
    //only erase if the current window does not contain that element.     
    m[arr[i-k]] = m[arr[i-k]] - 1;
    if(m[arr[i-k]] == 0) {
      m.erase(arr[i-k]);   
    }
    m[arr[i]] += 1; 
    cout << m.size() << " ";
  }
}

