#include<iostream>
using namespace std;

void zigzag(int n) {
  if(n == 1) {
    cout << 1 << "\n";
    return; 
  }
  cout<<n<<"\n"; 
  zigzag(n-1);
  cout<<n<<"\n"; 

}

int main() {
  int n; 
  cin >> n; 
  zigzag(n);
}