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
  stack<pair<long long, int>> st;
  vector<long long> ans(n);
  for(int i = 0; i < n; i++) {
    while(!st.empty() && st.top().first < arr[i]) {
      st.pop();
    } 
    if(st.empty()) {
      ans[i] = -1;
    } else {
      ans[i] = st.top().second;
    }
    st.push({arr[i], i});  
  }
  for(int i = 0; i <n; i++) {
    if(ans[i] == -1) {
      cout << "1" << " ";
    } else {
    cout << i - ans[i]<< " ";
    }
  }
}