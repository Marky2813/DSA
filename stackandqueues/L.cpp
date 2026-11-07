#include<iostream>
#include<stack>
#include<vector> 
using namespace std;

int main() {
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  stack<pair<long long, int>> 
  vector<long long> ans(n);
  for(int i = 0; i < n; i++) {
    int count = 1; 
    while(!st.empty() && st.top().first <= arr[i]) {
      count += st.top().second;
      st.pop();
    } 
    ans[i] = count;
    st.push({arr[i], count});  
  }
  for(int i = 0; i <n; i++) {
    cout << ans[i]<< " ";
  }
}