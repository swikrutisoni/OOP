#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("test.txt");
    if(!file){
        cout<<"File not found";
    }
    else{
        char ch;
        int count=0;
        while(file.get(ch)){
            if(!(ch==' ' || ch=='\n' || ch=='\t')){
                count++;
            }
        }
        cout<<"Number of words in the file: "<<count;
    }
}
