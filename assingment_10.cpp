
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int student_id;
    string name;
    int roll_no;
    string class_name;
    float marks;
    string address;

    void inputStudent() {
        cout << "Enter Student ID: ";
        cin >> student_id;

        cout << "Enter Name: ";
        getline(cin >> ws, name);

        cout << "Enter Roll No: ";
        cin >> roll_no;

        cout << "Enter Class: ";
        getline(cin >> ws, class_name);

        cout << "Enter Marks: ";
        cin >> marks;

        cout << "Enter Address: ";
        getline(cin >> ws, address);
    }

    void displayStudent() {
        cout << "\nStudent ID: " << student_id;
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll_no;
        cout << "\nClass: " << class_name;
        cout << "\nMarks: " << marks;
        cout << "\nAddress: " << address << endl;
    }
};

void createDatabase() {
    ofstream file("students.txt", ios::app);
    Student s;
    int n;

    cout << "How many students do you want to add? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        s.inputStudent();

        file << s.student_id << '\n'
             << s.name << '\n'
             << s.roll_no << '\n'
             << s.class_name << '\n'
             << s.marks << '\n'
             << s.address << '\n';
    }

    file.close();
    cout << "\nRecords saved successfully!\n";
}

void displayDatabase() {
    ifstream file("students.txt");
    Student s;

    if (!file) {
        cout << "Database not found!\n";
        return;
    }

    while (file >> s.student_id) {
        file.ignore();
        getline(file, s.name);
        file >> s.roll_no;
        file.ignore();
        getline(file, s.class_name);
        file >> s.marks;
        file.ignore();
        getline(file, s.address);

        s.displayStudent();
    }

    file.close();
}

void searchRecord() {
    ifstream file("students.txt");
    Student s;
    int id;
    bool found = false;

    cout << "Enter Student ID to search: ";
    cin >> id;

    while (file >> s.student_id) {
        file.ignore();
        getline(file, s.name);
        file >> s.roll_no;
        file.ignore();
        getline(file, s.class_name);
        file >> s.marks;
        file.ignore();
        getline(file, s.address);

        if (s.student_id == id) {
            s.displayStudent();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student not found!\n";

    file.close();
}

void updateRecord() {
    ifstream file("students.txt");
    ofstream temp("temp.txt");
    Student s;
    int id;
    bool found = false;

    cout << "Enter Student ID to update: ";
    cin >> id;

    while (file >> s.student_id) {
        file.ignore();
        getline(file, s.name);
        file >> s.roll_no;
        file.ignore();
        getline(file, s.class_name);
        file >> s.marks;
        file.ignore();
        getline(file, s.address);

        if (s.student_id == id) {
            cout << "Enter updated details:\n";
            s.inputStudent();
            found = true;
        }

        temp << s.student_id << '\n'
             << s.name << '\n'
             << s.roll_no << '\n'
             << s.class_name << '\n'
             << s.marks << '\n'
             << s.address << '\n';
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Record updated successfully!\n";
    else
        cout << "Student not found!\n";
}

void deleteRecord() {
    ifstream file("students.txt");
    ofstream temp("temp.txt");
    Student s;
    int id;
    bool found = false;

    cout << "Enter Student ID to delete: ";
    cin >> id;

    while (file >> s.student_id) {
        file.ignore();
        getline(file, s.name);
        file >> s.roll_no;
        file.ignore();
        getline(file, s.class_name);
        file >> s.marks;
        file.ignore();
        getline(file, s.address);

        if (s.student_id == id) {
            found = true;
            continue;
        }

        temp << s.student_id << '\n'
             << s.name << '\n'
             << s.roll_no << '\n'
             << s.class_name << '\n'
             << s.marks << '\n'
             << s.address << '\n';
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Record deleted successfully!\n";
    else
        cout << "Student not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT DATABASE =====\n";
        cout << "1. Create Database\n";
        cout << "2. Display Database\n";
        cout << "3. Delete Record\n";
        cout << "4. Update Record\n";
        cout << "5. Search Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createDatabase(); break;
            case 2: displayDatabase(); break;
            case 3: deleteRecord(); break;
            case 4: updateRecord(); break;
            case 5: searchRecord(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}