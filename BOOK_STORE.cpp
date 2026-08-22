#include<iostream>
#include <iomanip> // to store data in tabular form 
using namespace std;

class Book{
   
    int bookID;
    string bookTitle;
    float bookPrice;
    string bookAuthor;
    public:
        float getPrice(){
            return bookPrice;
} 
         void get_details(); 
         void print_details();
         void total_price();
};

void Book::get_details(){
    cout<< "Enter Book ID: ";
    cin>>bookID;
    cout<< "Enter Book Title: ";
    cin.ignore(); 
    getline(cin, bookTitle);
    cout<< "Enter Book Price: ";
    cin>>bookPrice;
    cout<< "Enter Book Author: ";
    cin.ignore(); 
    getline(cin, bookAuthor);
}
void Book::print_details(){
    cout<<setw(10)<<"Book ID: "<<bookID<<setw(20)<<"Title: "<<bookTitle<<setw(10)<<"Price: "<<bookPrice<<setw(20)<<"Author: "<<bookAuthor<<endl;
    
}



int main(){
     int n;
     cout<< "Enter number of books: ";
    cin>>n;
    Book b[n];
float total = 0;

for(int i = 0; i < n; i++){
    b[i].get_details();
}

cout << "\n";

for(int i = 0; i < n; i++){
    b[i].print_details();
    total += b[i].getPrice();
}

cout << "\nTotal Price = " << total;

return 0;
}