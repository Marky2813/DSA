#include<iostream>
#include<vector>
using namespace std; 

int main() {
  int q; 
  cin >> q;
  vector<int> values(q);
  int max = 0;
  for(int i = 0; i < q; i++) {
    cin >> values[i];
    if(values[i] > max) {
      max = values[i];
    }
  }
  vector<int> factors(max+1, 0);
  for(int i = 1; i <= max; i++) {
    for(int j = i; j <= max; j+=i) {
      factors[j]++;
    } 
  }

  //printing the array
  for(int i = 0; i < q; i++) {
    cout << factors[values[i]] << "\n";
  }
}