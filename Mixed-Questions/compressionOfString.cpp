// Problem: Compression of string
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/F>
// Approach: 2 pointer method 

//character will only be compressed if it's consective count is more than 1;
#include<iostream>
#include<string>
using namespace std; 
 
int main() {
    int t; 
    cin >> t; 
    for(int j = 0; j < t; j++) {
    string s; 
    cin >> s;
    char ch = s[0];
    int occurances = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        if(ch == s[i]) {
            occurances++; 
        } else {
            cout << ch; 
            if(occurances != 1) {
                cout << occurances;
            }
            ch = s[i]; 
            occurances = 1; 
            //push into the results string. 
        }
    }
    cout << ch;  
            if(occurances != 1) {
               cout << occurances; 
            }
    cout << endl; 
    }
}