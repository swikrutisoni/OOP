/*Design a class ‘Complex’ with data members for real and imaginary part. Provide default and Parameterized constructors. Write a
 program to perform arithmetic operations of two complex numbers.*/

 #include<iostream>
 using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex();
    Complex(double r, double i);
    Complex add(const Complex& c);
    Complex subtract(const Complex& c);
    void display();
};

Complex::Complex() : real(0), imaginary(0) {} // Default constructor

Complex::Complex(double r, double i) : real(r), imaginary(i) {}

Complex Complex::add(const Complex& c) {
    return Complex(real + c.real, imaginary + c.imaginary); 
}

Complex Complex::subtract(const Complex& c) {
    return Complex(real - c.real, imaginary - c.imaginary);
}

void Complex::display() {
    cout << real << " + " << imaginary << "i" << endl;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    return 0;
}
