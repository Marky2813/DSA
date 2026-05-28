#include<iostream>
#include<set>
using namespace std; 

int main() {
    int n; 
    string input; 
    cin >> n >> input; 
    int l = 0;
    set<char> s; 
    int maxlen = 0;
    for(int r = 0; r < n; r++) {
       //check if it exists in set. if it doesn't increase length and insert. else 
          while(s.count(input[r])) {
            s.erase(input[l]); 
            l++; 
          } 
       s.insert(input[r]); 
       maxlen = max(r - l + 1, maxlen);    
}
cout << maxlen << endl;
}