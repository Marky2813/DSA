#include<iostream>
#include<vector> 
#include<map> 
using namespace std; 

void f(string s, int idx, vector<char> &path, map<char, string> &keyword, vector<string> &ans) {
  if(idx==s.size()) {
    string s;
    for(int i = 0; i < path.size(); i++) {
      s+= path[i];
    }
    ans.push_back(s);
    return; 
  }
  char digit = s[idx];
  string choices = keyword[digit];
  for(char ch: choices) {
    path.push_back(ch);
    f(s, idx+1, path, keyword, ans);
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
  vector<char> path; 
  vector<string> ans;
  f(s, 0, path, keypad, ans);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}