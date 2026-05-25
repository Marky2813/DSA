#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 
int main() {
  int n, m, k; 
  cin >> n >> m >>k; 
  vector<long long> arr(n);
  unordered_set<long long> s; 
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  for(int i = 0; i < m; i++) {
    long long element; 
    cin >> element;
    s.insert(element);  
  }
  int contain = 0; 
  for(int i = 0; i < k; i++) {
    if(s.count(arr[i])) {
      contain++; 
    }
  }  
  cout << contain << " ";
  for(int i = k; i < n; i++) {
    //only erase if the current window does not contain that element.     
    if(s.count(arr[i])) {
      if(!s.count(arr[i-k])) {
          contain++; 
      }
    } else {
      if(s.count(arr[i-k])) {
          contain--; 
      }
    }
    cout << contain << " ";
  }
}
 