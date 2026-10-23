/*Assignment 11: Implement a program to handle Arithmetic exceptions, Array Index Out of Bounds.*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int choice;
    cout << "Choose an operation:\n";
    cout << "1. Division\n";
    cout << "2. Array Access\n";
    cout << "Enter your choice: ";
    cin >> choice;

    try {
        if (choice == 1) {
            int numerator, denominator;
            cout << "Enter numerator: ";
            cin >> numerator;
            cout << "Enter denominator: ";
            cin >> denominator;

            if (denominator == 0) {
                throw runtime_error("Division by zero is not allowed.");
            }

            double result = static_cast<double>(numerator) / denominator;
            cout << "Result: " << result << endl;
        } else if (choice == 2) {
            const int SIZE = 5;
            int arr[SIZE] = {1, 2, 3, 4, 5};
            int index;
            cout << "Enter index to access (0-4): ";
            cin >> index;

            if (index < 0 || index >= SIZE) {
                throw out_of_range("Array index out of bounds.");
            }

            cout << "Value at index " << index << ": " << arr[index] << endl;
        } else {
            cout << "Invalid choice." << endl;
        }
    } catch (const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cerr << "Out of range error: " << e.what() << endl;
    } catch (...) {
        cerr << "An unexpected error occurred." << endl;
    }

    return 0;
}