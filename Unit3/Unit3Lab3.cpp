#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    cout << setiosflags (ios::fixed | ios::showpoint); 
    // Problem 1
    cout << "Problem 1" << endl;
    double weight, height, bmi;
     cout << "Enter your weight in pounds: "; cin >> weight;
     cout << "Enter your height in inches: "; cin >> height;
    bmi = (weight / (height * height)) * 703;
    cout << "Your BMI is " << setprecision(2) << bmi << endl;
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi <= 25) {
        cout << "You have an optimal weight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }
    cout << "\n\n";

    // Problem 2: Gradebook
    cout << "Problem 2" << endl;
    int grade1, grade2, grade3, finalGrade;
    cout << "Enter first test grade (0-50): "; cin >> grade1;
    cout << "Enter second test grade (0-50): "; cin >> grade2;
    cout << "Enter third test grade (0-50): "; cin >> grade3;
    int higherGrade;
    if (grade1 > grade2) {
        higherGrade = grade1;
    } else {
        higherGrade = grade2;
    }

    finalGrade = (higherGrade + grade3);
    if (finalGrade > 100) 
    {
        cout << "Error in grade input." << endl;
    } else if (finalGrade >= 90) {
        cout << "Final Grade: A" << endl;
    } else if (finalGrade >= 80) {
        cout << "Final Grade: B" << endl;
    } else if (finalGrade >= 70) {
        cout << "Final Grade: C" << endl;
    } else {
        cout << "Final Grade: F" << endl;
    }
    cout << "\n\n";

    // Problem 3: Roman Numeral Converter
    cout << "Problem 3" << endl;
    int number;
    cout << "Enter a number (1-10): "; cin >> number;
    if (number < 1 || number > 10) {
        cout << "Invalid input." << endl;
    } else {
        cout << "Roman numeral: ";
        if (number == 1) {
            cout << "I";
        } else if (number == 2) {
            cout << "II";
        } else if (number == 3) {
            cout << "III";
        } else if (number == 4) {
            cout << "IV";
        } else if (number == 5) {
            cout << "V";
        } else if (number == 6) {
            cout << "VI";
        } else if (number == 7) {
            cout << "VII";
        } else if (number == 8) {
            cout << "VIII";
        } else if (number == 9) {
            cout << "IX";
        } else if (number == 10) {
            cout << "X";
        }
        cout << endl;
    }
    cout << "\n\n";

    // Problem 4: Magic Dates
    cout << "Problem 4" << endl;
    int month, day, year;
    cout << "Month: "; cin >> month;
    cout << "Day: "; cin >> day;
    cout << "Year (2 digits): "; cin >> year;
    if (month * day == year) {
        cout << "The date is magic!" << endl;
    } else {
        cout << "The date is not magic." << endl;
    }
    cout << "\n\n";

    // Problem 5: Taxes in Babbage
    cout << "Problem 5" << endl;
    double income;
    int tax;
    cout << "Enter your income: $"; cin >> income;
    if (income <= 5000) {
        tax = 0;
    } else if (income <= 10000) {
        tax = (income - 5000) * 0.03;
    } else if (income <= 20000) {
        tax = 150 + (income - 10000) * 0.055;
    } else if (income <= 40000) {
        tax = 700 + (income - 20000) * 0.108;
    } else {
        tax = 2860 + (income - 40000) * 0.237;
    }
    cout << "You owe $" << tax << " in taxes." << endl;
    cout << "\n\n";

    // Problem 6: Vehicle Registration
    cout << "Problem 6" << endl;
    double carweight, cost;
    cout << "Enter the weight of your vehicle in pounds: "; cin >> carweight;
    if (carweight <= 1500) {
        cost = 23.75;
    } else if (carweight <= 2500) {
        cost = 27.95;
    } else if (carweight <= 3000) {
        cost = 30.25;
    } else {
        cost = 37.00;
    }
    cout << "The registration cost is $" << setprecision(2) << cost << endl;

    return 0;
}
