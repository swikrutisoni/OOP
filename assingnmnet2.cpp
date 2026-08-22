#include <iostream>
using namespace std;

class BankAccount {
private:
    int accNo;
    string name;
    float balance;

    
    static int totalAccounts;
    static float totalBalance;

public:
   
    BankAccount(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;

        totalAccounts++;
        totalBalance += balance;
    }

    
   
    
    static void displayTotalAccounts() {
        cout << "Total Accounts: " << totalAccounts << endl;
    }

    static void displayTotalBalance() {
        cout << "Total Balance in Bank: " << totalBalance << endl;
    }

    
    void display() {
        cout << "Account No: " << accNo
             << " Name: " << name
             << " Balance: " << balance << endl;
    }

    
    void displayAscending(BankAccount other) {
        cout << "Balances in Ascending Order:" << endl;
        if (balance <= other.balance) {
            cout << balance << endl;
            cout << other.balance << endl;
        } else {
            cout << other.balance << endl;
            cout << balance << endl;
        }
    }
};


int BankAccount::totalAccounts;
float BankAccount::totalBalance;

int main() {
    BankAccount A1(101, "Rahul", 5000);
    BankAccount A2(102, "Sneha", 8000);
    BankAccount A3(103, "Amit", 3000);

    cout << "--- Individual Accounts ---" << endl;
    A1.display();
    A2.display();
    A3.display();

    cout << "\n--- Bank Statistics ---" << endl;
    BankAccount::displayTotalAccounts();
    BankAccount::displayTotalBalance();

    cout << "\n--- Comparing A1 and A2 ---" << endl;
    A1.displayAscending(A2);

    return 0;
}