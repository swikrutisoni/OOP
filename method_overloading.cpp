#include<iostream>
using namespace std;

class MethodOverloading {

    public:
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(double b) {
        cout << "Double: " << b << endl;
    }

    void display(string c) {
        cout << "String: " << c << endl;
    }
};
int main() {
    MethodOverloading obj;
    
    obj.display(10);          // Calls display(int)
    obj.display(3.14);       // Calls display(double)
    obj.display("Hello"); 
    return 0;   // Calls display(string)
}