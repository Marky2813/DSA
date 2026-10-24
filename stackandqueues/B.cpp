#include<iostream>
#include<stack>
using namespace std; 

bool isOpen(char ch) {
    return ch == '(' || ch == '[' || ch == '{';
}

bool isValid(char ch, char top) {
    return (ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{');
}

bool isBalanced(string s) {
  stack<char> st; 
   for(char c : s) {
      //)
      if(isOpen(c)) {
        st.push(c);
      } else {
        if(st.empty()) {
          return false; 
        }
        char top = st.top();
        if(isValid(c, top)) {
          st.pop();
        } else {
          return false; 
        }
      }
    }
    if(st.empty()) {
      return true; 
    } else {
      return false;
    }
}

int main() {
  int n; 
  cin >> n; 
  for(int i = 0; i < n; i++) {
    //()[]
    string s; 
    
    cin >> s; 
    
    if(isBalanced(s)) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}