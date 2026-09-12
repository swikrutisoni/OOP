/* Write a C++ program to create a student class with details like Roll no, Name, Marks of five subjects, percentage, class (First, Second, etc) 
have following functions: parameterized constructor, destructor, Display, Calculate percentage and grade*/

#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    int marks[5];
    float percentage;
    string grade;

public:
    Student();
    Student(int r, string n, int m[5]);
     ~Student();  
    void display();
    void calculatePercentage();
    void calculateGrade();
};

Student::Student() : rollNo(0), name(""), marks{0, 0, 0, 0, 0}, percentage(0.0), grade("") {}

Student::Student(int r, string n, int m[5]) {
    rollNo = r;
    name = n;
    for (int i = 0; i < 5; i++) {
        marks[i] = m[i];
    }
    percentage = 0.0;
    grade = "";
}

Student::~Student() {
    // Destructor
}

void Student::display() {
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}

void Student::calculatePercentage() {
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    percentage = (totalMarks / 500.0) * 100;
}

void Student::calculateGrade() {
    if (percentage >= 80) {
        grade = "First";
    } else if (percentage >= 60) {
        grade = "Second";
    } else if (percentage >= 40) {
        grade = "Third";
    } else {
        grade = "Fail";
    }
}

int main() {
    cout << "enter no of students" << endl;
    int n;
    cin >> n;
    Student* students = new Student[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        int rollNo;
        string name;
        int marks[5];
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Name: ";
        cin >> name;
        cout << "Marks (5 subjects): ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[j];
        }
        students[i] = Student(rollNo, name, marks);
    }

    for (int i = 0; i < n; i++) {
        students[i].calculatePercentage();
        students[i].calculateGrade();
        students[i].display();
    }

    delete[] students; 
    return 0;
}