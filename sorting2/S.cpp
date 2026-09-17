#include<iostream>
#include<vector>
#include<string> 
#include<algorithm> 
using namespace std; 

bool cmp(long long a, long long b) {
  string x = to_string(a) + to_string(b);
  string y = to_string(b) + to_string(a);
  return x > y;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<long long> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end(), cmp);
  string s = "";
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    s += to_string(arr[i]);
  }
  if(sum == 0) {
    cout << "0\n";
    return 0;
  }
  cout << s << "\n";
}