#include<iostream>
using namespace std; 

int main() {
  long long n; 
  cin >> n; 
  int count = 0;
  while(n%2 == 0) {
    n=n/2; 
    count++;
  }
  if(count != 0) {
  cout << "2^" << count << " ";
  }
  for(long long i = 3; i*i < n; i+=2) {
    count = 0; 
    while(n%i == 0) {
      n/=i; 
      count++;
    }
    if(count != 0) cout << i << "^" << count << " ";
  }
  if(n > 1) {
    cout << n << "^1";
  }
}