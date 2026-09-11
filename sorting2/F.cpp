#include<iostream>
#include<vector>
using namespace std;

void merge(string &s, int l, int r) {
  int mid=(l+r)/2; 
  int i = l; 
  int j = mid+1; 
  string temp = ""; 
  while(i <= mid && j <= r) {
    if(s[i] <= s[j]) {
      temp.push_back(s[i]);
      i++;
    } else {
      temp.push_back(s[j]);
      j++;
    }
  }
  while(i <= mid) {
    temp.push_back(s[i]);
    i++;
  }
  while(j <= r) {
    temp.push_back(s[j]);
    j++;
  }
  int ptr = 0;  
  for(int i = l; i <= r; i++) {
    s[i] = temp[ptr];
    ptr++; 
  }
}

void f(string &s,int l,int r) {
  if(l==r) {
    return;
  }
  int mid=(l+r)/2; 
  f(s, l, mid);
  f(s ,mid+1, r);
  merge(s, l, r);
} 

int main() {
  string s; 
  cin >> s; 
  f(s, 0, s.size()-1);
  cout << s << "\n"; 
}