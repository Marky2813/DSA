// Problem: Palindrome
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/M>
// Approach: the checking condition and the loop (a+b-1)/b

#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    cin >> s;
    for(int i = 0; i < (s.size()+1)/2; i++) {
        if(s[i] == s[s.size() - 1 - i]) {
            continue; 
        } else {
            cout << "NO"; 
            return 0; 
        }
    }
    cout << "YES"; 
    return 0; 
}