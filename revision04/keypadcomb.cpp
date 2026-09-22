#include<iostream>
#include<vector>
#include<map>
using namespace std;

void f(string s, int idx, string &path, map<char, string> &keypad, vector<string> &ans) {
  if(idx == s.size()) {
    ans.push_back(path);
    return;
  }
  char digit = s[idx];
  string choices = keypad[digit];
  for(char ch: choices) {
    path.push_back(ch);
    f(s, idx+1, path, keypad, ans);
    path.pop_back();
  }
}

int main() {
  string s; 
  cin >> s; 
  map<char, string> keypad;
  keypad.insert({'2', "abc"});
  keypad.insert({'3', "def"}); 
  keypad.insert({'4', "ghi"}); 
  keypad.insert({'5', "jkl"}); 
  keypad.insert({'6', "mno"}); 
  keypad.insert({'7', "pqrs"}); 
  keypad.insert({'8', "tuv"}); 
  keypad.insert({'9', "wxyz"});
  string path; 
  vector<string> ans;
  f(s, 0, path, keypad, ans);
  cout << ans.size() << "\n";
  for (size_t i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << "\n"; 
  }
  
}