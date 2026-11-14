#include <iostream>
using namespace std;




int main() {
try {
    cout << "A";

    try {
        cout << "B";
        throw 10;
    }
    catch (double x) {
        cout << "C";
    }
}
catch (int x) {
    cout << "D";
}

cout << "E";

return 0;

}