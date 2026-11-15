#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollNo;
    char name[30];
    float marks;
};



int main() {
Student s;
int searchRoll = 102;
bool found = false;

ifstream fin("student.dat", ios::binary);

while (fin.read((char*)&s, sizeof(s))) {
    if (s.rollNo == searchRoll) {
        cout << s.name << " " << s.marks;
        found = true;
        break;
    }
}

if (!found) {
    cout << "Student not found";
}

fin.close();

return 0;
}