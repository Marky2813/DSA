#include<iostream>
using namespace std;

void increasing(int n, int i) {
  if(n < i) {
    return; 
  }
  cout<<i<<"\n"; 

  increasing(n, ++i);
}

int main() {
  int n; 
  cin >> n; 
  increasing(n, 1);
}