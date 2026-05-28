#include<iostream>
#include<map>
using namespace std; 

int main() {
    int n, k; 
    string input; 
    cin >> n >> k >> input; 
    map<char, int> m; 
    int l = 0;
    long long count = 0;
    for(int r = 0; r < n; r++) {
      //s.size less than or equal to 2.
      m[input[r]] += 1;
      while(m.size() > k) {
        m[input[l]] -= 1;
        if(m[input[l]] == 0) {
          m.erase(input[l]);
        }
        l++; 
      } 
      if(m.size() <= k) count += r-l+1;   
    }
    cout << count << endl;
}