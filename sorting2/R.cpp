#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std; 


struct Flight {
  long long flightNumber; 
  long long departureTime; 
  string dest; 
};

bool cmp(Flight a, Flight b) {
  if(a.departureTime != b.departureTime) {
    return a.departureTime < b.departureTime;
  } else{
    return a.flightNumber < b.flightNumber;
  } 
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<Flight> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i].flightNumber >> arr[i].departureTime >> arr[i].dest;
  }
  sort(arr.begin(), arr.end(), cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i].flightNumber << " " << arr[i].departureTime << " " << arr[i].dest << "\n";
  }
}