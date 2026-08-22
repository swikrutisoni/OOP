#include<iostream>
using namespace std;

class Employee {
    int empId;
    string empName;
    float empSalary;

    public:
    void setData();
    void grossSalary();
    
};

void Employee::setData(){
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "enter employee name:";
    cin >> empName;
    cout << "Enter employee salary: ";
    cin >> empSalary;
}
 void Employee::grossSalary(){
    int HRA, DA, GrossSalary;
    HRA= 0.2*empSalary;
    DA= 0.1*empSalary;
    GrossSalary= empSalary + HRA + DA;
    cout << "Employee ID: " << empId << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Gross Salary: " << GrossSalary << endl;

 }

 int main() {
    Employee emp;
    emp.setData();
    emp.grossSalary();
    return 0;
 }
