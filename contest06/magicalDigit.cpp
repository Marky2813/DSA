#include<iostream> 
using namespace std; 

int magic(long long n) {
  long long sum = 0;
  while(n>0) {
    int digit = n%10; 
    sum += digit;
    n = n/10;
  } 
  if(sum < 10) return sum; 
  magic(sum);
}

int main() {
  long long n; 
  cin >> n; 
  cout << magic(n);
}