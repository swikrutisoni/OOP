#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    string s1 = "Hello World";
    string s2;

    s2 = move(s1);

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    return 0;
}