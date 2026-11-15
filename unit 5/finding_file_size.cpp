#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream fin("data.txt", ios::binary);

    fin.seekg(0, ios::end);

    int size = fin.tellg();

    cout << "File size: " << size << " bytes";

    fin.close();

    return 0;
}