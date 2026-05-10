// Problem: Two sum - 2 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/J>
//our process of complement checking was right but instead of doing it after processing the map. Doing it while processing the map was really really simple and easy


#include<iostream>
#include<map>
using namespace std;
 
int main() {
    int n; 
    long long x;
    cin >> n >> x; 
    map<long long, int> elements;
    long long pairs = 0;  
    for(int i = 0; i < n; i++) {
        long long ele; 
        cin >> ele; 
        long long complement = x - ele; 
        if(elements.count(complement)) {
             auto it = elements.find(complement);
             pairs += it->second;  
        }
        elements[ele] = elements[ele]+1; 
    }
    cout << pairs; 
    return 0; 
  }

//on code forces a non zero return value is treated as a runtime error. 