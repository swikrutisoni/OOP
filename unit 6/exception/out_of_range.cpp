#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    try {
        cout << v.at(5);
    }
    catch (const out_of_range& e) {
        cout << "Index out of range";
    }

    return 0;
}

/*vector stores three elements.
Valid indices are 0, 1 and 2.
v.at(5) throws a standard out_of_range exception.
The catch block handles it.

*/