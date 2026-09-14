#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 


struct Order {
  long long orderId; 
  long long timestamp; 
  long long priority; 
};

bool cmp(Order a, Order b) {
  if(a.priority != b.priority) {
    return a.priority > b.priority; 
  } else if(a.timestamp != b.timestamp) {
    return a.timestamp < b.timestamp;
  } else {
    return a.orderId < b.orderId;
  }
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<Order> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i].orderId >> arr[i].timestamp >> arr[i].priority;
  }
  sort(arr.begin(), arr.end(), cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i].orderId << " " << arr[i].timestamp << " " << arr[i].priority << "\n";
  }
}