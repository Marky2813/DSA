// Problem: Take intersection
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/F>
//store both the arrays in a map, one key and pair(occurances)) phir loop over one array
//if the key of the one exists in the other find their min. loop that many times and store the result in a vector
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std; 
 
int main() {
    vector<long long> s; 
    int n1; 
    cin >> n1;
    map<long long, int> arr1; 
    for(int i = 0; i < n1; i++) {
        long long element; 
        cin >> element;
        arr1[element] = arr1[element] + 1; 
    }
    int n2; 
    cin >> n2;
    map<long long, int> arr2; 
    for(int i = 0; i < n2; i++) {
        long long element; 
        cin >> element;
        arr2[element] = arr2[element] + 1; 
    }
    for(auto ele: arr1) {
        long long multiplicity = min(ele.second, arr2[ele.first]); 
        for(long long i = 0; i < multiplicity; i++) {
          s.push_back(ele.first); 
        }
    }
    cout << s.size() << "\n";
    for(int i = 0; i < s.size(); i++) {
      cout << s[i] << " "; 
    } 
}