#include<iostream>
#include<vector>
#include<cmath>
#include<set>
using namespace std; 

int main() {
    int n, q;
    cin >> n >> q;  
    vector<char> arr(n);
    //a vector has valid indices from 0 to n-1 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    vector<int> prefix(n+1);
    prefix[0] = 0; 
    int vowels = 0; 
    int consonants = 0; 
    for(int i = 0; i < n; i++) {
      if(arr[i] == 'a' || arr[i] == 'e' ||arr[i] == 'i' || arr[i] == 'o' ||arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
        vowels++; 
      } else {
        consonants++;
      }
      prefix[i] = vowels-consonants; 
    }
    for(int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r; 
      cout << prefix[r] << " " << prefix[l-1] << endl;
      if(prefix[r] == prefix[l-1]) {
        cout << "YES" << "\n"; 
      } else {
        cout << "NO" << "\n"; 
      }
    }
} 
//ṇṇ