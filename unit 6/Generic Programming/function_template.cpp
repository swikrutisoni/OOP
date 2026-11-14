#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMax(10, 20) << endl;
    cout << findMax(4.5, 8.2) << endl;
    cout << findMax<int>(30, 15);

    return 0;
}