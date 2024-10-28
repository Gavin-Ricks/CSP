#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setiosflags(ios::fixed | ios::showpoint);
    // Problem 1
    cout << "Problem 1" << endl;
    int num, sum;
    sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    while (num < 0) {
        cout << "That's not a positive integer! Try again: ";
        cin >> num;
    }
    int i = 0;
    while ( i <= num) {
        sum += i;
        i++;
    }
    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl;
    cout << "\n\n";

    // Problem 2
    cout << "Problem 2" << endl;
    double oceanLevel = 0;
    double rise = 1.5;
    int years = 1;
    int totalYears = 25;
    cout << setw(15) << "Year" << setw(35) << "Ocean Level (mm)" << endl;
    cout << "-------------------------------------------------------" << endl;
    while (years <= totalYears) {
        oceanLevel += rise;
        cout << setw(15) << years << setw(15) << "|" << setw(15) << oceanLevel << " mm" << endl;
        years++;
    }
    cout << "\n\n";

    // Problem 3
    cout << "Problem 3" << endl;
    double cpm = 3.6;
    int minutes = 5;
    cout << "Minutes" << setw(20) << "Calories Burned" << endl;
    cout << "---------------------------" << endl;
    while (minutes <= 30) {
        double burned = minutes * cpm;
        cout << setw(10) << minutes << " | " << setw(15) << setprecision(1) << burned << endl;
        minutes += 5;
    }
    cout << "\n\n";

    // Problem 4
    cout << "Problem 4" << endl;
    double membership = 2500.00;
    const double rate = 0.04;
    int year = 1;
    cout << left << setw(10) << "Year" << right << setw(20) << "Membership Fee" << endl;
    cout << "---------------------------------" << endl;
    while (year <= 6) {
        cout << left << setw(10) << year << right << setw(20) << "$" << setprecision(2) << membership<< endl;
        membership += membership * rate;
        year++;
    }
    cout << "\n\n";

    // Problem 5
    cout << "Problem 5" << endl;
    int speed, hours, hour = 1;
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hours;
    cout << "\nHour" << setw(20) << "Distance Traveled" << endl;
    cout << "-------------------------" << endl;
    while (hour <= hours) {
        cout << setw(4) << hour << setw(20) << speed * hour << " miles" << endl;
        hour++;

    cout << "\n\n";
    }
    return 0;
}