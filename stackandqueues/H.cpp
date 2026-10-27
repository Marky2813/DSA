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
  stack<long long> st;
  vector<long long> ans(n);
  for(int i = n-1; i >= 0; i--) {
    while(!st.empty() && st.top() <=arr[i]) {
      st.pop();
    } 
    if(st.empty()) {
      ans[i] = -1;
    } else {
      ans[i] = st.top();
    }
    st.push(arr[i]);  
  }
  for(int i = 0; i <n; i++) {
    if(ans[i] == -1) {
      cout << "X" << " ";
    } else {
    cout << ans[i] << " ";
    }
  }
}