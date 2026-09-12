#include<iostream>
using namespace std;

class  publication{
public:
    string title;
    double price;
    int copies;
    double saleCopies();
};
 class book:public publication{
public:
    string author;
    int orderCopies();
    };
/*
Magazine : Publication

orderQty
currentIssue
receiveIssue()*/

class magazine:public publication{
public:
    int orderQty;
    string currentIssue;
    void receiveIssue();
};

int main() {
    // Example usage of the classes
    book myBook;
    myBook.orderCopies();
    cout << myBook.saleCopies();
    magazine myMagazine;
    myMagazine.saleCopies();
}


int book::orderCopies(int quantity){
    cout << "Enter the number of copies to order: ";
    cin >> quantity;
    cout << "Ordered " << quantity << " copies." << endl;
    return quantity;
}
double publication::saleCopies()
{
    double sale = copies * price;
    return sale;
}
