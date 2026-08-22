#include <iostream>
using namespace std;

class calculator {
    int num1, num2;

public:
    void setData();
    void add();
    void subtract();
    void multiply();
    void divide();
    void modulus();
};



void calculator::setData() {
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

void calculator::add() {
    cout << "Addition: " << num1 + num2 << endl;
}

void calculator::subtract() {
    cout << "Subtraction: " << num1 - num2 << endl;
}

void calculator::multiply() {
    cout << "Multiplication: " << num1 * num2 << endl;
}

void calculator::divide() {
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

void calculator::modulus() {
    if (num2 != 0) {
        cout << "Modulus: " << num1 % num2 << endl;
    } else {
        cout << "Error: Modulus by zero is not allowed." << endl;
    }
}

int main() {
    calculator calc;

    calc.setData();

    cout << "\nChoose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Modulus\n";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            calc.add();
            break;
        case 2:
            calc.subtract();
            break;
        case 3:
            calc.multiply();
            break;
        case 4:
            calc.divide();
            break;
        case 5:
            calc.modulus();
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}