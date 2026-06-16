#include<iostream>
#include<array>
using namespace std;

long long a[1000005]; 

int main() {
  int n, d; 
  cin >> n >> d; 
  for(int i = 1; i <= n; i++) {
    int s, t; 
    cin >> s >> t; 
    int l = s;
    int r = t-d; 
    if(l <=r ){
      a[l]++;
    a[r+1]--;
    }
  }
  long long sum = 0; 
  long long ans = 0; 
  for(int i =0 ; i <= 1000000; i++) {
    sum += a[i]; 
    ans += sum*(sum-1)/2;
  }
  cout << ans << endl;
}
