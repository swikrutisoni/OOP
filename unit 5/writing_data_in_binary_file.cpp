#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollNo;
    char name[30];
    float marks;
};

int main() {
    Student s = {101, "Swikruti", 85.5};
    Student s1 = {102, "Rohit", 90.0};
    Student s2 = {103, "Anjali", 92.5};

    ofstream fout("student.dat", ios::binary);

    fout.write((char*)&s, sizeof(s));
    fout.write((char*)&s1, sizeof(s1));
    fout.write((char*)&s2, sizeof(s2));

    fout.close();
    ifstream fin("student.dat", ios::binary);

    while (fin.read((char*)&s, sizeof(s))) {
    cout << s.rollNo << " "
         << s.name << " "
         << s.marks << endl;
}



fin.close();
    return 0;
}

/*1. ios::binary

Opens the file in binary mode.

2. sizeof(s)

Returns the size of the complete Student structure in bytes, including any padding added by the compiler.

3. (char*)&s

Let's break it down:
- &s gives the memory address of the student object.
- (char*) converts that address into a character pointer, as required by write().*/