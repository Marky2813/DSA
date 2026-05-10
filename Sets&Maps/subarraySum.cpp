#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> elements;
    for(int i = 0; i <n; i++) {
        long long ele;
        cin >> ele; 
        elements.push_back(ele); 
    }
    vector<long long> sum; 
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            sum.push_back(elements[i]);
        }
        sum.push_back(elements[i] + sum[i-1]); 
    }
    for(int i = 0; i < n; i++) {
        cout << sum[i];
    }
    cout << "NO"; 
}