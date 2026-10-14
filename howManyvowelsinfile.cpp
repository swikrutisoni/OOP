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
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                count++;
            }
        }
        cout<<"Number of vowels in the file: "<<count;
    }  
}