// #include<iostream> 
// #include<vector>
// #include<limits>
// using namespace std;

// int main() {
//   int n, k; 
//   cin >> n >> k; 
//   vector<long long> arr(n);
//   for(int i =0; i < n; i++) {
//     cin >> arr[i];
//   }
//   long long ans = LLONG_MIN;
//   for(int i =0 ; i < n-k+1; i++) {
//     long long sum = 0;
//     for(int j = i; j < i+k; j++) {
//       sum+=arr[j];
//     }
//     if(sum > ans) {
//       ans = sum;
//     }
//   }
//   cout << ans; 
// }

//whenever you are using long long, check all the data types carefully before submitting and before even starting the question take a look at values provided in the question. To complete it within the given time, it needs to be order n which can be accomplished using sliding window. 


#include<iostream> 
#include<vector>
#include<limits>
using namespace std;

int main() {
  int n, k; 
  cin >> n >> k; 
  vector<long long> arr(n);
  for(int i =0; i < n; i++) {
    cin >> arr[i];
  }
  long long sum = 0;
  for(int i = 0; i < k; i++) {
    sum += arr[i];
  }
  long long ans = sum;
  for(int i = k; i < n; i++) {
    sum = sum + arr[i] - arr[i-k];
    ans = max(ans, sum); 
  }
  cout << ans; 
}
