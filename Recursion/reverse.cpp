#include<iostream>
using namespace std;

void reverse(long long n) {
  if(n == 0) {
    return; 
  }
  cout<<(n%10); 
  reverse(n/10); 
}

int main() {
  long long n; 
  cin >> n; 
  if(n ==0 ) {
    cout << 0;
    return 0;
  }
  reverse(n);
}