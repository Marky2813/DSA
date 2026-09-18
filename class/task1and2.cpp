// Tasks 1 & 2: String class with heap memory + deep-copying copy constructor
#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* data;   // pointer to heap memory
    size_t len;

public:
    // Task 1: dynamic constructor (allocates on the heap with new)
    String(const char* s = "") {
        len = strlen(s);
        data = new char[len + 1];      // +1 for the '\0' terminator
        strcpy(data, s);
        cout << "[ctor]  created \"" << data << "\"\n";
    }

    // Task 2: copy constructor (deep copy: new buffer, copy the characters)
    String(const String& other) {
        len = other.len;
        data = new char[len + 1];      // own separate memory
        strcpy(data, other.data);
        cout << "[copy]  copied  \"" << data << "\"\n";
    }

    // Task 1: destructor releases the heap memory
    ~String() {
        cout << "[dtor]  freeing \"" << data << "\"\n";
        delete[] data;                 // delete[] because we used new[]
    }

    void setChar(size_t i, char c) { if (i < len) data[i] = c; }
    void display() const { cout << data << "\n"; }
};

int main() {
    String a("Hello");
    String b = a;          // copy constructor runs here

    b.setChar(0, 'J');     // change only b

    cout << "a = "; a.display();   // Hello  (unaffected -> deep copy works)
    cout << "b = "; b.display();   // Jello

    return 0;              // destructors run automatically, in reverse order
}