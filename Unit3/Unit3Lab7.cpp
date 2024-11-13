#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << setiosflags(ios::fixed | ios::showpoint);
    
    // Problem 1: Savings Account Balance
    cout << "Problem 1" << endl;
    double annualInterest, startingBalance, balance, deposit, withdrawal, monthlyInterest, totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;
    int months;

    cout << "Enter the annual interest rate (APR): "; cin >> annualInterest;
    cout << "Enter the starting balance: "; cin >> startingBalance;
    cout << "Enter the number of months: ";  cin >> months;
    balance = startingBalance;
    monthlyInterest = annualInterest / 12 / 100;
    for (int month = 1; month <= months; month++) {
        cout << "Month " << month << endl;
        do {
            cout << "Enter the amount deposited: "; cin >> deposit;
            if (deposit < 0) {
                cout << "Number cannot be negative. Try again" << endl;
            }
        } while (deposit < 0);
        balance += deposit;
        totalDeposits += deposit;

        do {
            cout << "Enter the amount withdrawn: "; cin >> withdrawal;
            if (withdrawal < 0) {
                cout << "Number cannot be negative. Try again" << endl;
            }
        } while (withdrawal < 0);
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        if (balance < 0) {
            cout << "The account has been closed." << endl;
            break;
        }

        double interest = balance * monthlyInterest;
        balance += interest;
        totalInterest += interest;
    }

    if (balance >= 0) {
        cout << "Ending balance: $" << balance << endl;
        cout << "Total deposits: $" << totalDeposits << endl;
        cout << "Total withdrawals: $" << totalWithdrawals << endl;
        cout << "Total interest earned: $" << totalInterest << endl;
    }
    cout << "\n\n";
    // Problem 2: Sales Bar Chart
    cout << "Problem 2" << endl;
    int numStores = 5;
    int sales[numStores];

    for (int i = 0; i < numStores; i++) {
        cout << "Enter today’s sales for store " << (i + 1) << ": "; cin >> sales[i];
    }
    cout << endl;
    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;

    for (int i = 0; i < numStores; i++) {
        cout << "Store " << (i + 1) << ": ";
        for (int j = 0; j < sales[i] / 100; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}