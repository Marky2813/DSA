#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Student {
  string name; 
  int totalMarks;
  int physicsMarks; 
  int chemMarks; 
  int mathMarks; 
};

bool cmp(Student a, Student b) {
  if(a.totalMarks != b.totalMarks) {
    return a.totalMarks > b.totalMarks; 
  } else if(a.mathMarks != b.mathMarks) {
    return a.mathMarks > b.mathMarks; 
  } else if(a.physicsMarks != b.physicsMarks) {
    return a.physicsMarks > b.physicsMarks; 
  }
  return a.name < b.name; 
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; 
  cin >> n; 
  vector<Student> arr(n); 
  for(int i = 0; i < n; i++) {
    cin >> arr[i].name >> arr[i].totalMarks >> arr[i].physicsMarks >> arr[i].chemMarks >> arr[i].mathMarks;
  }
  sort(arr.begin(), arr.end(), cmp);
  for(int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].totalMarks << " " << arr[i].physicsMarks << " " << arr[i].chemMarks << " " << arr[i].mathMarks << "\n";
  }
}