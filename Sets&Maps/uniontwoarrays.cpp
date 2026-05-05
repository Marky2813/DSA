// Problem: Search queries with time complexity
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/E>
// Approach: maps and find() 

#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int n1, n2; 
    set<long long> s;  
    cin >> n1; 
    vector<long long> arr1; 
    for(int i = 0; i < n1; i++) {
        int element; 
        cin >> element; 
        arr1.push_back(element);
    }
    s.insert(arr1.begin(), arr1.end()); 
    cin >> n2; 
    vector<long long> arr2; 
    for(int i = 0; i < n2; i++) {
        int element; 
        cin >> element; 
        arr2.push_back(element);
    }
    s.insert(arr2.begin(), arr2.end()); 
    cout << s.size() << "\n";
    for(long long x: s) {
      cout << x << " "; 
    }
    //do their union and add to a set. how would you genreally perform union of two arrays. 
    //alright here we are using arrays. but doing the same using vectors is pretty easy. 
}