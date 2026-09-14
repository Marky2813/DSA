#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;

#define int long long
long long a, b;

bool cmp(vector<long long>& c, vector<long long>& d) {
  long long edc = (c[0] - a)*(c[0]-a) + (c[1]-b)*(c[1]-b);
  long long  edd = (d[0] - a)*(d[0]-a) + (d[1]-b)*(d[1]-b);

  if(edc != edd) {
    return edc < edd; 
  } else if(c[0] != d[0]) {
    return c[0] < d[0]; 
  } else {
    return c[1] < d[1]; 
  }
}

signed main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n >> a >> b; 
  vector<vector<long long>> arr(n, vector<long long>(2));
  for(int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }
  sort(arr.begin(), arr.end(), cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i][0] << " " << arr[i][1] << "\n";
  }
}