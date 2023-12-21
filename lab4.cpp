
#include <iostream>
#include <string>

using namespace std;

class BankEmployee {
private:
    string name;
    int accountNo;
    double balance;

public:
    BankEmployee(string empName, int accNo, double initBalance) {
        name = empName;
        accountNo = accNo;
        balance = initBalance;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance - amount < 500) {
            cout << "Invalid Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
};

int main() {
    string empName;
    int accNo;
    double initBalance;

    cout << "Enter Employee Name: ";
    cin >> empName;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> initBalance;

    BankEmployee employee(empName, accNo, initBalance);

    employee.displayDetails();

    double withdrawAmount, depositAmount;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;
    employee.withdraw(withdrawAmount);

    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;
    employee.deposit(depositAmount);

    return 0;
}


