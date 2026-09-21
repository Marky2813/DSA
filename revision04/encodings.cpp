#include<iostream> 
#include<vector>  
#include<string>
using namespace std; 

char toAlphabet(int n) {
  return char('a' + n-1);
}

void f(int idx, string s, vector<char> &path, vector<string> &ans) {
  if(idx == s.size()) {
    string k; 
    for(int i = 0; i < path.size(); i++) {
      k += path[i];
    }
    ans.push_back(k);
    return;
  }; 

  int num1 = stoi(s.substr(idx, 1));

  if(num1 > 0) {
    char encoding = toAlphabet(num1);
    path.push_back(encoding);
    f(idx+1, s, path, ans);
    path.pop_back();
  }

  int num2 = stoi(s.substr(idx, 2));

  if(num2 >= 10 && num2 <= 26) {
    char encoding = toAlphabet(num2);
    path.push_back(encoding);
    f(idx+2, s, path, ans);
    path.pop_back();
  }

}

int main() {
  string s; 
  cin >> s; 
  vector<string> ans;
  vector<char> path;
  f(0, s, path, ans); 
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}