#include<iostream>
#include<stack> 
using namespace std; 

int main() {
  string s; 
  cin >> s; 
  int k; 
  cin >> k; 
  stack<pair<char, int>> st; 
  for(char c:s) {
    if(!st.empty() && c == st.top().first) {
       if(++st.top().second == k) st.pop();
     } else {
      st.push({c, 1});
    }
  }
  s = "";
  stack<char> temp;
  while(st.size()) {
    for(int i = 0; i < st.top().second; i++)
        temp.push(st.top().first);
    st.pop();
  }
  while(temp.size()) {
    s += temp.top();
    temp.pop();
  }
  cout << s; 
}