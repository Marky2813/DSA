#include<iostream>
#include<stack>
using namespace std; 
int main() {
    //()[]
    string s;  
    cin >> s; 
    stack<char> st; 
    int depth = 0; 
    int maxDepth = 0;
    for(char c : s) {
      if(c=='(') {
        st.push('(');
        depth++;
      } else if(c==')') {
        if(!st.empty()) {
          maxDepth = max(maxDepth, depth);
          st.pop();
          depth--;
        }
      }
    }
    cout << maxDepth;
}