#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setiosflags(ios::fixed | ios::showpoint);
    
    // Problem 1: Pennies for Pay
    cout << "Problem 1: Pennies for Pay" << endl;
    int days;
    double totalPay = 0.0;
    double dailyPay = 0.01;

    // Input validation for number of days
    do {
        cout << "Enter the number of days: ";
        cin >> days;
        if (days < 1) {
            cout << "Number of days must be at least 1. Please try again." << endl;
        }
    } while (days < 1);

    cout << fixed << setprecision(2);
    cout << "Day\tDaily Pay\tTotal Pay" << endl;

    int day = 1;
    do {
        cout << day << "\t$" << dailyPay << "\t\t$" << totalPay + dailyPay << endl;
        totalPay += dailyPay;
        dailyPay *= 2;
        day++;
    } while (day <= days);

    cout << "Total pay after " << days << " days is $" << totalPay << endl;

    // Problem 2: Hotel Occupancy
    cout << "\nProblem 2: Hotel Occupancy" << endl;
    int floors, rooms, occupiedRooms, totalRooms = 0, totalOccupied = 0;

    // Input validation for number of floors
    do {
        cout << "Enter the number of floors: ";
        cin >> floors;
        if (floors < 1) {
            cout << "Number of floors must be at least 1. Please try again." << endl;
        }
    } while (floors < 1);

    for (int i = 1; i <= floors; i++) {
        do {
            cout << "Enter the number of rooms on floor " << i << ": ";
            cin >> rooms;
            if (rooms < 10) {
                cout << "Number of rooms on a floor must be at least 10. Please try again." << endl;
            }
        } while (rooms < 10);

        cout << "Enter the number of occupied rooms on floor " << i << ": ";
        cin >> occupiedRooms;

        totalRooms += rooms;
        totalOccupied += occupiedRooms;
    }

    int unoccupiedRooms = totalRooms - totalOccupied;
    double occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;

    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << unoccupiedRooms << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    // Problem 3: The Greatest and Least of These
    cout << "\nProblem 3: The Greatest and Least of These" << endl;
    int number, largest, smallest;
    bool firstInput = true;

    do {
        cout << "Enter an integer (-99 to end): ";
        cin >> number;

        if (number != -99) {
            if (firstInput) {
                largest = smallest = number;
                firstInput = false;
            } else {
                if (number > largest) largest = number;
                if (number < smallest) smallest = number;
            }
        }
    } while (number != -99);

    if (!firstInput) {
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}