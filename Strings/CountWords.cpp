// Problem: Count Words
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/N>
// Approach: getline

#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    getline(cin, s); 
    int words = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            words++; 
        }
    }
    cout << words+1;
}