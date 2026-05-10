// Problem: Two sum - 1 
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/H>
//we will need to use map here because it is not said the elements are distinct, 


#include<iostream>
#include<map>
using namespace std;

int main() {
    int n; 
    long long x;
    cin >> n >> x; 
    map<long long, int> elements; 
    for(int i = 0; i < n; i++) {
        long long ele; 
        cin >> ele; 
        elements[ele] = elements[ele] + 1; 
    }
    for(auto ele: elements) {
        long long diff = x - ele.first; 
        if(diff != ele.first) {
            if(elements.count(diff)) {
                cout << "TRUE"; 
                return 0; 
            }
        } else if(diff == ele.first && ele.second > 1) {
            cout << "TRUE";
            return 0;  
        }
    }

    cout << "FALSE"; 
    return 0; 
}
//on code forces a non zero return value is treated as a runtime error. 