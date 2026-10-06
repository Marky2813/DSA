#include<iostream>
using namespace std; 

class Student {
  int marks;
  public: 
  Student() {
    marks = 0;
  }
  Student(int v) {
    marks = v; 
  }
  ~Student() {
    cout << "bye";
}
  void show() {
    cout << marks; 
  }

  friend ostream& operator<<(ostream&out, Student& s);
};

ostream& operator<<(ostream& out, Student& s) {
  out << s.marks;
  return out; 
}

int main() {
  Student a; 
  a.show();
  Student b(50);
  b.show();
}