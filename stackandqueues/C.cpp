#include<iostream>
#include<stack>
using namespace std; 
int main() {
    //()[]
    string s;  
    cin >> s; 
    int n;  
    cin >> n; 
    stack<char> st; 
    st.push('(');
    for(int i = n+1; i < s.size();i++) {
        if(st.empty()) {
          cout << i-1; 
          return 0; 
        } 
        if(s[i] == '(') {
          st.push('(');
        } else if(s[i] == ')') {
          st.pop();
        }
    }
    if(st.empty()) {
          cout << s.size()-1; 
          return 0; 
        }
    return -1;
}