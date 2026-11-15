#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out);

    if (!file) {
        cout << "File opening failed";
        return 1;
    }

    file << "Hello";

    file.seekp(3);
file.put('X');

    ofstream fout("data.txt", ios::app);

fout << "\nWelcome to OOPS";

ifstream fin("data.txt");

fin.seekg(4);

cout << fin.tellg();

cout << fout.tellp();


    file.close();
    return 0;
}