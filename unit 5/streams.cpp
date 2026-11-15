#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* int main() {
    ifstream fin("student.txt");

    string name;
    getline(fin, name);

    cout << name;

    fin.close();

    ofstream fout("student.txt");

    fout << "Swikruti";

    fout.close();
    return 0;
} */




int main() {
    fstream file("student.txt", ios::in | ios::out);

    file << "Hello";

    file.seekg(0);

    string word;
    file >> word;

    cout << word;

    file.close();
    return 0;
}