/* Write a program to extend Book class with dynamic memory allocation. (Use of “new” keyword and object pointers)*/

#include<iostream>
using namespace std;

class Book{
    public:
      string title;
      string author;
      double price;

      void input_data(){
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter author: ";
        cin>>author;
        cout<<"Enter price: ";
        cin>>price;
      }

      void display_data(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
      }
};

int main(){
    Book *book=new Book;
    book->input_data();
    book->display_data();
    delete book;
    return 0;
}