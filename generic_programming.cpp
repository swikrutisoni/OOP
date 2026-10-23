/*allows defining algorithm in genric way
achieving reusable code 
it can be achived throufh templtes
templates are the blue print to create class or function which can work with any data type


template<typename T>
T functionname(T.a,T.b)
{
return a+b;
}

*/

#include<iostream>
using namespace std;

template<class T> // function template
T add(T a, T b){
    return a + b;
}

int main(){
    cout<<add(10,20)<<endl; // int
    cout<<add(10.5,20.5)<<endl; // double
    cout<<add('A','B')<<endl; // char
    return 0;
}

