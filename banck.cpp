#include<iostream>
using namespace std;

class Bank {
    int accountNumber;
    string accountHolderName;
    float balance;
    public:
    void setData();
    void withdrawal();
    void deposit();

};

void Bank::setData(){
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Account Holder Name: ";
    cin >> accountHolderName;
    cout << "Enter Initial Balance: ";
    cin >> balance;
}

void Bank::withdrawal(){
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if(amount <= balance){
        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}
void Bank::deposit(){
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Deposit successful. New balance: " << balance << endl;
}

int main() {
    Bank bank;
    bank.setData();
    
    int choice;
    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Withdraw\n";
        cout << "2. Deposit\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                bank.withdrawal();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 3);

    return 0;
}