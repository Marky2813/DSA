#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    cin >> s; 
    bool uppercase = false, lowercase = false, digit = false, specialchar = false;
    int count = 0;  
    for(int i = 0; i < (int)s.size(); i++) {
      if(65 <= int(s[i]) && int(s[i]) <= 90) {
        if(!uppercase) count++; 
        uppercase = true;
      } else if(97 <= int(s[i]) && int(s[i]) <= 122) {
        if(!lowercase) count++; 
        lowercase = true;
      } else if(48 <= int(s[i]) && int(s[i]) <= 57) {
        if(!digit) count++; 
        digit = true;
      } else {
        if(!specialchar) count++;
        specialchar = true;
      }
    }
    if(count == 4) {
      cout <<  "Strong"; 
    } else if(count == 3) {
      cout << "Moderate";
    } else {
      cout << "Weak"; 
    }
}