#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ifstream fout("rohit.txt");
    if (!fout) {
    cout << "File opening failed";
}
    string name;
    getline(fout, name);
    cout << name;
    fout.close();
    return 0;
}