#include<iostream>
#include<stack> 
using namespace std; 

int main() {
  string s; 
  cin >> s; 
  stack<char> st; 
  for(char c:s) {
    if(st.empty()) st.push(c);
    else if(c == st.top()) {
      st.pop();
    } else {
      st.push(c);
    }
  }
  s = "";
  stack<char> temp;
  while(st.size()) {
    temp.push(st.top());
    st.pop();
  }
  while(temp.size()) {
    s += temp.top();
    temp.pop();
  }
  cout << s; 
}