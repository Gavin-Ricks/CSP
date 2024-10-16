#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    cout << setiosflags(ios::fixed | ios::showpoint);
    //Problem 1
    cout << "Problem 1: " << endl;
    int pennies, nickels, dimes, quarters;
    cout << "Enter the number of pennies: "; cin >> pennies;
    cout << "Enter the number of nickels: "; cin >> nickels;
    cout << "Enter the number of dimes: "; cin >> dimes;
    cout << "Enter the number of quarters: "; cin >> quarters;
    int total = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);

    if (total == 100) {
        cout << "You have exactly 1 dollar." << endl;
    } else if (total >= 100) {
        cout << "You have more than 1 dollar." << endl;
    } else {
        cout << "You have less than 1 dollar." << endl << endl;
    }
    cout << "\n\n";
    //Problem 1
    cout << "Problem 2: " << endl;
    double gravity = 9.81;
    double mass;
    cout << "Enter the object's mass (lbs): "; cin >> mass;
    double weight = mass * gravity;
    cout << "The weight of the object is: " << weight << "N." << endl;
    if (weight > 1000) {
        cout << "The object is too heavy." << endl;
    } else if (weight < 10) {
        cout << "The object is too light." << endl << endl;
    }
    cout << "\n\n";
    //Problem 3
    cout << "Problem 3: " << endl;
    double retailprice = 99.0;
    int unitsSold;
    cout << "Number of units sold: "; cin >> unitsSold;
    double discount = 0;
    if (unitsSold >= 100) {
        discount = 0.50;
    } else if (unitsSold >= 50) {
        discount = 0.40;
    } else if (unitsSold >= 20) {
        discount = 0.30;
    } else if (unitsSold >= 10) {
        discount = 0.20;
    }
    double discountamount = retailprice * discount * unitsSold;
    double pTotal = retailprice * unitsSold - discountamount;
    cout << "Discount amount: $" << setprecision(2) << discountamount << endl;
    cout << "Total price after discount: $" << setprecision(2) << pTotal << endl;
    cout << "\n\n";
    //Problem 4
    cout << "Problem 4:" << endl;
    int s;
    cout << "Number of s: "; cin >> s;

    if (s >= 86400) {
        int days = s / 86400;
        s %= 86400;
        int hours = s / 3600;
        s %= 3600;
        int minutes = s / 60;
        s %= 60;
        cout << "Time: " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << s << " s." << endl;
    } else if (s >= 3600) {
        int hours = s / 3600;
        s %= 3600;
        int minutes = s / 60;
        s %= 60;
        cout << "Time: " << hours << " hours, " << minutes << " minutes, and " << s << " s." << endl;
    } else if (s >= 60) {
        int minutes = s / 60;
        s %= 60;
        cout << "Time: " << minutes << " minutes, and " << s << " s." << endl;
    } else {
        cout << "Time: " << s << " s." << endl << endl;
    }
    cout << "\n\n";
    //Problem 5
    cout << "Problem 5: " << endl;
    int days, months, years;
    cout << "Enter month (1-12): "; cin >> months;
    cout << "Enter years: "; cin >> years;

    if (months == 2) {
        if (years % 4 == 0 && (years % 100 != 0 || years % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else {
        if (months == 4 || months == 6 || months == 9 || months == 11) {
            days = 30;
        } else {
            days = 31;
        }
    }
    cout << "Days: " << days << endl;

    return 0;
}