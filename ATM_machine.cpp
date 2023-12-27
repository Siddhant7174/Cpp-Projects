#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;

public:
    ATM(int bal)
    {
        balance = bal;
    }
    int getBalance()
    {
        return balance;
    }
    int withdraw(int amount)
    {
        if (amount > balance)
            return false;
        balance = balance - amount;
        return true;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }
};

int main()
{
    cout << "Welcome to SS bank ATM" << endl;
    cout << "Enter balance : ";
    int balance;
    cin >> balance;
    cout << endl
         << endl;

    ATM atm(balance);
    int choice, amount, success, deposit, option;

    do
    {
        cout << "Select option: " << endl;
        cout << "1.) View Balance \n2.) Cash Withdraw \n3.) Cash Deposit \n4.) Exit" << endl;
        cout << "Your answer : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your Balance : " << atm.getBalance() << endl;
            cout << endl;
            break;

        case 2:
            cout << "Enter withdraw amount : ";
            cin >> amount;
            success = atm.withdraw(amount);
            if (success)
                cout << "Withdraw successfull" << endl
                     << endl;
            else
                cout << "Insufficient Balance" << endl
                     << endl;
            break;

        case 3:
            cout << "Enter Deposit amount : ";
            cin >> deposit;
            atm.deposit(deposit);
            cout << "Deposit Successfull";
            cout << endl
                 << endl;
            break;

        case 4:
            cout << "Thankyou for using ATM...";
            cout << endl
                 << endl;
            break;

        default:
            cout << "Invalid Choice ... choose between 1 to 4" << endl;
        }
        cout << "Do you want to continue another transcation : " << endl;
        cout << "Select option :- \n1.) Yes \n 2.) No" << endl;
        cout << "Your answer : ";
        cin >> option;
        cout << endl;

    } while (option == 1);

    // atm.deposit(5000);
    // cout<<"Money deposited, current balance =  "<<atm.getBalance()<<endl;
    // cout<<"Your balance  = "<<atm.getBalance()<<endl;
}