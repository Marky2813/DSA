// Problem: Longest word
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/G>
// Approach: get line and word ends at a space char, special case if the input is only a single word. 

#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    getline(cin, s);
    int longestWord = 0; 
    int curr = 0; 
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ' ') {
            if(curr > longestWord) {
                longestWord = curr; 
            }
            curr = 0;
        } else {
            curr++; 
        }
    }
    if(curr>longestWord) {
        longestWord = curr; 
    }
    cout << longestWord; 
}