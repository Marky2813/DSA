#include<iostream>
using namespace std; 
 
int main() {
    int n, k; 
    cin >> n >> k;
    long long arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    long long maxSum = 0;
    for(int i = 0; i < k; i++) {
        sum = sum + arr[i];
    }
    maxSum = sum;
    for(int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i-k];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}