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
    Student(int r, string n, int m[5]);
     ~Student();  
    void display();
    void calculatePercentage();
    void calculateGrade();
};

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
    int marks[5] = {85, 90, 78, 92, 88};
    Student student1(1, "John Doe", marks);
    student1.calculatePercentage();
    student1.calculateGrade();
    student1.display();

    return 0;
}