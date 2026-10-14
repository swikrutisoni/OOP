#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream oldfile("test.txt");
    ofstream newfile("newtest.txt");

    if(!oldfile || !newfile){
        cout<<"File not found";
    }
    else{
        string line;
        while(getline(oldfile,line)){
            newfile<<line<<endl;
        }
        cout<<"File copied successfully";
    }
}

