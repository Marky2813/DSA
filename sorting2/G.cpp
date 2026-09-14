#include<iostream>
using namespace std; 

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
   int n; 
   cin >> n; 
   int arr[n];
   int freq[10] = {0}; 
   for(int i = 0; i < n; i++) {
      cin >> arr[i]; 
   }
   for(int i = 0; i < n; i++) {
      freq[arr[i]]++; 
   }
    string s; s.reserve(n);
for (int d = 9; d >= 0; d--) s.append(freq[d], char('0' + d));
cout << s << "\n";
}