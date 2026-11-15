#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main() {
ifstream fin("student.txt");
string line;

while (getline(fin, line)) {
    cout << line << endl;
}

if (fin.eof()) {
    cout << "End of file reached";
}

fin.close();
}