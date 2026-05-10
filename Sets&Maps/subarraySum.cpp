#include<iostream>
#include<map>
using namespace std;
 
int main() {
    int n;
    long long x;
    cin >> n >> x;
    map<long long, int> sum;
    sum.insert({0, 0});
    long long total = 0;
    for(int i = 1; i <=n; i++) {
        long long ele;
        cin >> ele; 
        total += ele; 
        if(sum.count(total - x)) {
            auto it = sum.find(total-x);
            cout << it->second+1 << " " << i;
            return 0; 
        }
        sum.insert({total, i});
    }
    cout << -1; 
    return 0;
}