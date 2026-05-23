#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool checkPalindrome(string s) {
  int l = 0;
  while(l <= int(s.length())-l-1) {
    if(s[l] != s[s.length()-l-1]) {
      return false; 
    }
    l++;
  }  
  return true;
}

int main() {
  int n; 
  cin >> n;
  vector<string> arr;  
  string s; 
  cin >> s; 
    for(int j = 0; j < n; j++) {
      string substring = ""; 
      for(int k = j; k < n; k++) { 
        substring+=s[k];
        bool palindrome = checkPalindrome(substring);
        if(palindrome) {
          arr.push_back(substring);
        }
      }
    }
  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << '\n';
  }
}

//ṇṇ

