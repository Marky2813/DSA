#include<iostream>
using namespace std; 
 
int main() {
    string s; 
    cin >> s; 
    string hh = s.substr(0,2); 
    string mm = s.substr(3, 2);
    if(hh == mm) {
      cout <<"Mogambo is happy"; 
    } else {
      cout <<"Mogambo is sad"; 
    }
}