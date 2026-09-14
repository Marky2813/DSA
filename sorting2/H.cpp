#include<iostream>
using namespace std; 

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n;  
  int freq[101] = {0};
  for(int i = 0; i < n; i++) {
    int x; 
    cin >> x; 
    freq[x]++; 
  }
  for(int i = 0; i < 101; i++) {
    while(freq[i]--) {
      cout << i << " "; 
    }
  }
}