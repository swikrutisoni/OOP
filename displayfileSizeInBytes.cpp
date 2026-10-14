
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("newtest.txt");

    if (!inFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    inFile.seekg(0, ios::end);  // Move to the end of file

    streampos size = inFile.tellg();  // Get current position

    cout << "File size: " << size << " bytes" << endl;

    inFile.close();
    return 0;
}

