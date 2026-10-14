#include<iostream>
#include<fstream>
#include<limits>

using namespace std;

int main(){
    ifstream file("nums.txt");
    if(!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }
    else {
        int num;
        int maxNum = numeric_limits<int>::min();
        int minNum = numeric_limits<int>::max();
        
        while(file >> num) {
            if(num > maxNum) {
                maxNum = num;
            }
            if(num < minNum) {
                minNum = num;
            }
        }
        
        cout << "Maximum number: " << maxNum << endl;
        cout << "Minimum number: " << minNum << endl;
    }

    return 0;
}