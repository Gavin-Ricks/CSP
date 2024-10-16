#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
    cout << setiosflags(ios::fixed | ios::showpoint);
    //Problem 1
    cout << "Problem 1: " << endl;
    int a, b;
    cout << "Enter a value: "; cin >> a;
    cout << "Enter another value: "; cin >> b;
    if (a >= b) {
        cout << "The larger value is: " << a << endl;
    } else {
        cout << "The larger value is: " << b << endl;
    }
    cout << "\n\n";
    //Problem 2
    cout << "Problem 2: "<< endl;
    int c, d, e, f;
    cout << "Enter four values: " << endl; 
    cout << "1st value: "; cin >> c;
    cout << "2nd value: "; cin >> d;
    cout << "3rd value: "; cin >> e;
    cout << "4th value: "; cin >> f;
    int smallest = c;
    int largest = c;
    if (d < smallest) {
        smallest = d;
    } else if (d > largest) {
        largest = d;
    }
    if (e < smallest) {
        smallest = e;
    } else if (e > largest) {
        largest = e;
    }
    if (f < smallest) {
        smallest = f;
    } else if (f > largest) {
        largest = f;
    }
    cout << "The smallest value is: " << smallest << endl;
    cout << "The largest value is: " << largest << endl;
    cout << "\n\n";
    //Problem 3
    cout << "Problem 3: " << endl;
    int number;
    cout << "Enter an integer value: "; cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even." << endl << endl;
    } else {
        cout << number << " is odd." << endl << endl;
    }
    cout << "\n\n";
    //Problem 4
    cout << "Problem 4: " << endl;
    double l1, w1;
    cout << "Enter the length and width of the first rectangle: " << endl;
    cout << "length: ";  cin >> l1;
    cout << "width: "; cin >> w1;
    double l2, w2;
    cout << "Enter the length and width of the second rectangle: " << endl;
    cout << "length: "; cin >> l2;
    cout << "width: "; cin >> w2;
    double a1 = l1 * w1;
    double a2 = l2 * w2;
    if (a1 > a2) {
        cout << "The first rectangle has the largest area: " << a1 << endl << endl;
    } else if (a2 > a1) {
        cout << "The second rectangle has the largest area: " << a2 << endl << endl;
    } else {
        cout << "Both rectangles have the same area: " << a1 << endl << endl;
    }
    //Problem 5
    cout << "Problem 5: " << endl;
    double weight;
    cout << "Enter your weight on Earth (lbs): "; cin >> weight;
    cout << "Select a planet to calculate your weight: " << endl;
    cout << "1. Mercury " << endl;
    cout << "2. Venus " << endl;
    cout << "3. Mars " << endl;
    cout << "4. Jupiter " << endl;
    cout << "5. Saturn " << endl;
    cout << "6. Uranus " << endl;
    cout << "7. Neptune " << endl;
    cout << "8. Pluto " << endl;
    int choice;
    cout << "Choose planet (1-8): "; cin >> choice;
    double planetWeight;
    if (choice == 1) {
        planetWeight = weight * 0.37;
    }
    if (choice == 2) {
        planetWeight = weight * 0.88;
    }
    if (choice == 3) {
        planetWeight = weight * 0.38;
    }
    if (choice == 4) {
        planetWeight = weight * 2.64;
    }
    if (choice == 5) {
        planetWeight = weight * 1.15;
    }
    if (choice == 6) {
        planetWeight = weight * 1.15;
    }
    if (choice == 7) {
        planetWeight = weight * 1.12;
    }
    if (choice == 8) {
        planetWeight = weight * 0.04;
    }
    cout << "Weight = " << planetWeight << " lbs" << endl;
    cout << "\n\n";
    //Problem 6
    cout << "Problem 6: " << endl;
    srand(time(0));
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int num3 = rand() % 100 + 1;
    cout << "Random numbers: " << num1 << ", " << num2 << ", " << num3 << "." << endl;
    int minNum;
    int midNum;
    int maxNum;
    if (num1 <= num2 && num1 <= num3) {
        minNum = num1;
        if (num2 <= num3) {
            midNum = num2;
            maxNum = num3;
        } else {
            midNum = num3;
            maxNum = num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        minNum = num2;
        if (num1 <= num3) {
            midNum = num1;
            maxNum = num3;
        } else {
            midNum = num3;
            maxNum = num1;
        }
    } else {
        minNum = num3;
        if (num1 <= num2) {
            midNum = num1;
            maxNum = num2;
        } else {
            midNum = num2;
            maxNum = num1;
        }
    }
    cout << "Numbers in increasing order: " << minNum << ", " << midNum << ", " << maxNum << "." << endl;
    
    return 0;
}