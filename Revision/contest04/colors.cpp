#include<iostream>
#include<map>
#include<vector>
using namespace std; 

int main() {
  map<long long, long long> color; 
  int x; 
  cin >> x;
  vector<long long> arr;  
  for(int i = 0; i < x; i++) {
    long long element; 
    cin >> element; 
    arr.push_back(element);
    if(element == arr[i-1] && i > 0) {
      color[element] = color[element] + 1; 
    } else {
      color[element] = 1; 
    }
  }
  auto it = color.begin();
  long long largest = it->second; 
  for(auto pair: color) {
    if(largest < pair.second) {
      largest = pair.second;
    }
  }
  cout << largest; 
} 