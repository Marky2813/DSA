#include<iostream>
#include<vector>
using namespace std;

bool isVowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}

int main() {
  int n, k; 
  cin >> n >> k; 
  vector<char> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i]; 
  }
  int vowels = 0; 
  for(int i = 0; i < k; i++) {
    if(isVowel(arr[i])) {
      vowels++; 
    } 
  }  
  cout << vowels << " "; 
  for(int i = k; i < n; i++) {
    if(isVowel(arr[i])) {
      if(!isVowel(arr[i-k])) {
        vowels++; 
      }
    } else {
      if(isVowel(arr[i-k])) {
        vowels--; 
      }
    }
    cout << vowels << " ";
  }
}

