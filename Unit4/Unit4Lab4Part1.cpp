#include<iostream>

using namespace std;

//list the function prototypes here.

int getEmployees();
int getTotalDaysAbsent(int numEmployees);
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent);

int main() 
{
    int numEmployees = getEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calculateAverageDaysAbsent(numEmployees, totalDaysAbsent);
    cout << "The average number of days absent is: " << averageDaysAbsent << endl;
    return 0;
}

//Add the function definitions here.

int getEmployees() {
    int numEmployees;
    do {
        cout << "Enter the number of employees in the company: "; cin >> numEmployees;
        if (numEmployees < 1) {
            cout << "Number of employees must be at least 1. Please try again." << endl;
        }
    } while (numEmployees < 1);
    return numEmployees;
}

int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;
    int daysAbsent;
    for (int i = 0; i < numEmployees; ++i) {
        do {
            cout << "Enter the number of days employee " << (i + 1) << " missed: ";
            cin >> daysAbsent;
            if (daysAbsent < 0) {
                cout << "Number of days missed cannot be negative. Please try again." << endl;
            }
        } while (daysAbsent < 0);
        totalDaysAbsent += daysAbsent;
    }
    return totalDaysAbsent;
}

double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}