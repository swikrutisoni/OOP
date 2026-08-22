#include <iostream>
using namespace std;
class Student {
    int rollno;
    string name;
public:
    void setData()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }
    void displayData()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}