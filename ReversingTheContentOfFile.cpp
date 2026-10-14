
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("newtest.txt");

    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    inFile.seekg(0, ios::end);
    streampos size = inFile.tellg();

    for (int i = (int)size - 1; i >= 0; i--) {
        inFile.seekg(i, ios::beg);

        char ch;
        inFile.get(ch);

        cout << ch;
    }

    inFile.close();
    return 0;
}
