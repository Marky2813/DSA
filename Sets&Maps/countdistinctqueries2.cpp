// Problem: count distinct queries - 2
// Link: <https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/D>
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
                //idhar now we need to remove a single occurance instead all the instaces
                auto it = ms1.find(num);
                if(it != ms1.end()) {
                  ms1.erase(it); 
                }  

                auto it2 = ms1.find(num);
                if(it2 == ms1.end() && it != ms1.end()) { 
                  s.erase(num); 
                }
                //whether we should or we should not remove it from the set is the question. this can only be answered if i have the number of occurances of a particular element  in a multiset. 
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