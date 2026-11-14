#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;

public:
    void setValue(T v) {
        value = v;
    }

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> b1;
    Box<float> b2;

    b1.setValue(10);
    b2.setValue(5.5f);

    cout << b1.getValue() << endl;
    cout << b2.getValue();

    return 0;
}