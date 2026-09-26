/* Design a base class shape with two double type values and member functions to input the data and compute_area() for calculating area of shape. 
Derive two classes: triangle and rectangle.
Make compute_area() as an abstract function and redefine this function in the derived class to suit their requirements. 
Write a program that accepts dimensions of triangle/rectangle and displays calculated area.
Implement dynamic binding for given case study. */

#include<iostream>
using namespace std;

class Shape{
    public:
      double value1;
      double value2;
      void input_data(){
        cout<<"Enter value1: ";
        cin>>value1;
        cout<<"Enter value2: ";
        cin>>value2;
      }

        virtual void compute_area()=0;
    
};
class Triangle: public Shape{
    public:
      void compute_area(){
        double area=0.5*value1*value2;
        cout<<"Area of triangle: "<<area<<endl;
      }
    
};
class Rectangle: public Shape{
    public:
      void compute_area(){
        double area=value1*value2;
        cout<<"Area of rectangle: "<<area<<endl;
      }
};

int main(){
    Shape *shape;
    Triangle triangle;
    Rectangle rectangle;

    int choice;
    cout<<"Enter 1 for triangle and 2 for rectangle: ";
    cin>>choice;

    if(choice==1){
        shape=&triangle;
        shape->input_data();
        shape->compute_area();
    }
    else if(choice==2){
        shape=&rectangle;
        shape->input_data();
        shape->compute_area();
    }
    else{
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}