// Problem: count distinct queries
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/C>
// Approach: mulitset

#include<iostream>
#include<set>
using namespace std; 
 
int main() {
    multiset<long long> ms1;
    set<long long> s;
    int q; 
    cin >> q; 
    for(int i = 0; i < q; i++) {
        int type;
        cin >> type; 
        if(type != 3) {
            long long num; 
            cin >> num;
            if(type == 1) {
                ms1.insert(num);
                s.insert(num); 
            } else if (type == 2) {
                // remove all occurances from the multiset. 
                ms1.erase(num); 
                s.erase(num); 
            } else {
                auto it = ms1.find(num); 
                if(it != ms1.end())  {
                cout << "YES\n"; 
                } else {
                cout << "NO\n"; 
                }
            }
        } else {
            cout << s.size() << "\n"; 
        }
    }
}


//learned multiset but it really wasn't needed