#include <iostream>
using namespace std;

int main()
{
    //Problem 1: Running the Race
    cout << "Problem 1: " << endl;
    string runner1, runner2, runner3;
    int time1, time2, time3;
    cout << "Enter name of runner 1: ";
    getline(cin, runner1);
    cout << "Enter time for runner 1: "; cin >> time1;
    cin.ignore();
    cout << "Enter name of runner 2: ";
    getline(cin, runner2);
    cout << "Enter time for runner 2: "; cin >> time2;
    cin.ignore();
    cout << "Enter name of runner 3: ";
    getline(cin, runner3);
    cout << "Enter time for runner 3: "; cin >> time3;
    if ((time1 < time2) && (time1 < time3)) {
        cout << "First place: " << runner1 << ", ";
        if (time2 < time3) {
            cout << "Second place: " << runner2 << ", Third place: " << runner3 << endl;
        } else {
            cout << "Second place: " << runner3 << ", Third place: " << runner2 << endl;
        }
    } else if ((time2 < time1) && (time2 < time3)) {
        cout << "First place: " << runner2 << ", ";
        if (time1 < time3) {
            cout << "Second place: " << runner1 << ", Third place: " << runner3 << endl;
        } else {
            cout << "Second place: " << runner3 << ", Third place: " << runner1 << endl;
        }
    } else {
        cout << "First place: " << runner3 << ", ";
        if (time1 < time2) {
            cout << "Second place: " << runner1 << ", Third place: " << runner2 << endl;
        } else {
            cout << "Second place: " << runner2 << ", Third place: " << runner1 << endl;
        }
    }

    //Problem 2: Personal Best
    cout << "Problem 2: " << endl;
    string date1, date2, date3;
    double height1, height2, height3;
    cout << "Enter date of first vault: "; cin >> date1;
    cout << "Enter height of first vault: "; cin >> height1;
    cout << "Enter date of second vault: "; cin >> date2;
    cout << "Enter height of second vault: "; cin >> height2;
    cout << "Enter date of third vault: "; cin >> date3;
    cout << "Enter height of third vault: "; cin >> height3;
    if (height1 < 2.0 || height1 > 5.0 || height2 < 2.0 || height2 > 5.0 || height3 < 2.0 || height3 > 5.0) {
        cout << "Error: Invalid height" << endl;
        return 1;
    }
    if (height1 >= height2 && height1 >= height3) {
        cout << "Best vault: " << date1 << " with height " << height1 << " meters" << endl;
        if (height2 >= height3) {
            cout << "Second best vault: " << date2 << " with height " << height2 << " meters" << endl;
            cout << "Third best vault: " << date3 << " with height " << height3 << " meters" << endl;
        } else {
            cout << "Second best vault: " << date3 << " with height " << height3 << " meters" << endl;
            cout << "Third best vault: " << date2 << " with height " << height2 << " meters" << endl;
        }
    } else if (height2 >= height1 && height2 >= height3) {
        cout << "Best vault: " << date2 << " with height " << height2 << " meters" << endl;
        if (height1 >= height3) {
            cout << "Second best vault: " << date1 << " with height " << height1 << " meters" << endl;
            cout << "Third best vault: " << date3 << " with height " << height3 << " meters" << endl;
        } else {
            cout << "Second best vault: " << date3 << " with height " << height3 << " meters" << endl;
            cout << "Third best vault: " << date1 << " with height " << height1 << " meters" << endl;
        }
    } else {
        cout << "Best vault: " << date3 << " with height " << height3 << " meters" << endl;
        if (height1 >= height2) {
            cout << "Second best vault: " << date1 << " with height " << height1 << " meters" << endl;
            cout << "Third best vault: " << date2 << " with height " << height2 << " meters" << endl;
        } else {
            cout << "Second best vault: " << date2 << " with height " << height2 << " meters" << endl;
            cout << "Third best vault: " << date1 << " with height " << height1 << " meters" << endl;
        }
    }

    //Problem 3: Fat Gram Calculator
    cout << "Problem 3: " << endl;
    double totalCalories, fatGrams, caloriesFromFat, fatPercentage;
    cout << "Enter total calories: "; cin >> totalCalories;
    cout << "Enter fat grams: "; cin >> fatGrams;
    if (totalCalories < 0 || fatGrams < 0) {
        cout << "Error: Calories and fat grams must be non-negative." << endl;
        return 1;
    }
    caloriesFromFat = fatGrams * 9;
    if (caloriesFromFat > totalCalories) {
        cout << "Error: Calories from fat cannot exceed total calories." << endl;
        return 1;
    }
    fatPercentage = (caloriesFromFat / totalCalories) * 100;
    cout << "Percentage of calories from fat: " << fatPercentage << "%" << endl;
    if (fatPercentage < 30) {
        cout << "This food is low in fat." << endl;
    }

    //Problem 4: Bank Charges
    cout << "Problem 4: " << endl;
    double accountBalance, serviceFees = 10.0;
    int checksWritten;
    cout << "Enter ending balance: "; cin >> accountBalance;
    cout << "Enter number of checks written: "; cin >> checksWritten;
    if (checksWritten < 0) {
        cout << "Error: Number of checks written cannot be negative." << endl;
        return 1;
    }
    if (accountBalance < 400) {
        serviceFees += 15.0;
    }
    if (checksWritten <= 20) {
        serviceFees += checksWritten * 0.10;
    } else if (checksWritten < 40) {
        serviceFees += checksWritten * 0.08;
    } else if (checksWritten < 60) {
        serviceFees += checksWritten * 0.06;
    } else {
        serviceFees += checksWritten * 0.04;
    }
    accountBalance -= serviceFees;
    cout << "Total service fees: $" << serviceFees << endl;
    cout << "Final ending balance: $" << accountBalance << endl;

    return 0;
}