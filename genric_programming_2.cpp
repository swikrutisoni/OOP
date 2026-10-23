#include <iostream>
using namespace std;

template <class T>
class Box{
 T value;
 public:
     Box( T v){
         value =v;
     }
     void show(){
         cout<<value<<endl;
     }
};

int main(){
    Box<int> b1(10);
    Box<double> b2(20.5);
    Box<char> b3('A');
    b1.show();
    b2.show();
    b3.show();
    return 0;
}