
#include <iostream>
using namespace std;

class Publication {
public:
    string Title;
    double Price;
    int Copies;

    Publication(string title, double price, int copies) {
        Title = title;
        Price = price;
        Copies = copies;
    }
};

class Book : public Publication {
public:
    string Author;

    Book(string title, double price, int copies, string author)
        : Publication(title, price, copies) {
        Author = author;
    }

    void orderCopies() {
        int order;

        cout << "Enter copies to order for " << Title << ": ";
        cin >> order;

        Copies += order;
    }
};

class Magazine : public Publication {
public:
    string CurrentIssue;

    Magazine(string title, double price, int copies, string issue)
        : Publication(title, price, copies) {
        CurrentIssue = issue;
    }

    void orderQty() {
        int order;

        cout << "Enter copies to order for " << Title << ": ";
        cin >> order;

        Copies += order;
    }

    void receiveIssue() {
        cout << "Current issue of " << Title
             << ": " << CurrentIssue << endl;
    }
};

int main() {

    // Multiple Books
    Book books[3] = {
        Book("C++", 100, 10, "Bjarne"),
        Book("Java", 150, 20, "James"),
        Book("Python", 200, 15, "Guido")
    };

    // Multiple Magazines
    Magazine magazines[2] = {
        Magazine("TechToday", 50, 20, "September"),
        Magazine("ScienceWorld", 80, 15, "October")
    };

    double totalSale = 0;

    // Order copies for all books
    for (int i = 0; i < 3; i++) {
        books[i].orderCopies();
    }

    // Order copies for all magazines
    for (int i = 0; i < 2; i++) {
        magazines[i].orderQty();
    }

    // Display books
    cout << "\n----- BOOK DETAILS -----" << endl;

    for (int i = 0; i < 3; i++) {

        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << books[i].Title << endl;
        cout << "Author: " << books[i].Author << endl;
        cout << "Price: " << books[i].Price << endl;
        cout << "Total Copies: " << books[i].Copies << endl;

        totalSale += books[i].Price * books[i].Copies;
    }

    // Display magazines
    cout << "\n----- MAGAZINE DETAILS -----" << endl;

    for (int i = 0; i < 2; i++) {

        cout << "\nMagazine " << i + 1 << endl;
        cout << "Title: " << magazines[i].Title << endl;
        cout << "Price: " << magazines[i].Price << endl;
        cout << "Total Copies: " << magazines[i].Copies << endl;

        magazines[i].receiveIssue();

        totalSale += magazines[i].Price * magazines[i].Copies;
    }

    cout << "\nTotal Sale of Publication: "
         << totalSale << endl;

    return 0;
}

