#include<iostream>
#include<map>
using namespace std;

int main() {
  map<long long, int> m;  
  int n; 
  long long k; 
  cin >> n >> k;
  long long pairs = 0; 
  for(int i = 1; i <= n; i++) {
    long long element; 
    cin >> element;
    if(k == 0) {
      if(element == 0) {
        pairs = pairs + (i-1); 
      }
    } else if(element%k == 0) {
      long long ai = element/k; 
      pairs = pairs + m[ai]; 
    }
    m[element] = m[element] + 1;
   }
  cout << pairs; 
}
//ṇ
