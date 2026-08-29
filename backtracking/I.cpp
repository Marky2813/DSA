#include<iostream>
#include<string> 
#include<vector> 
using namespace std; 

char toAlphabet(int n) {
  if(n < 1 || n > 26) return '?'; 

  char base = 'a'; 
  return static_cast<char>(base+(n-1));
}

void f(string s, int idx, vector<char> &path, vector<string> &ans) {
  if(idx == s.size()) {
    string k; 
    for(int i = 0;  i < path.size(); i++) {
      k += path[i];
    }
    ans.push_back(k);
    return;
  }

  int num1 = stoi(s.substr(idx, 1));
  if(num1 > 0) {
    char ch = toAlphabet(num1);
     path.push_back(ch);
     f(s, idx+1, path, ans);
     path.pop_back();
  }

  int num2 = stoi(s.substr(idx, 2));
  if(num2 >= 10 && num2 <=26) {
    char ch = toAlphabet(num2);
     path.push_back(ch);
     f(s, idx+2, path, ans);
     path.pop_back();
  }

}

int main() {
  string s; 
  cin >> s; 
  vector<string> ans; 
  vector<char> path; 
  f(s, 0, path, ans);
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  } 
}