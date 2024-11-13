
#include <iostream>
#include <iomanip>


using namespace std;

//Function Prototypes
//The prototypes should include the return type, method name, and data types of any parameter values, separated by commas.
void displayStars(); //Default function with no parameter values
void displayStars(int); //Overloaded function with 1 parameter value
int addTwoNumbers(int, int); //Return function with two parameter values.
int addThreeNumbers(int, int, int); //Return function with three parameter values.
double calculateRetail(double, double); 
int main()
{
cout << "Problem 1" << endl << endl;
displayStars();
cout << endl << endl << "Problem 2" << endl << endl;
displayStars(15);

cout << endl << endl << "Problem 3" << endl << endl;
cout << addTwoNumbers(5, 8); //Remove comments when starting this problem

cout << endl << endl << "Problem 4" << endl << endl;
cout << addThreeNumbers(2, 5, 7) << endl;

cout << endl << endl << "Problem 5" << endl << endl;
double wholesalePrice, markupPercentage;
cout << "What is the wholesale price: "; cin >> wholesalePrice;
cout << "What is the markup percentage: "; cin >> markupPercentage;
cout << "The retail price of the item should be: $" << calculateRetail(wholesalePrice, markupPercentage) << endl;
return 0;
}
//Stub functions for the first two problems are given to you.
void displayStars()
{
     for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            cout << "*";
        }
        cout << endl;
    }
}
void displayStars(int num)
{
    for (int row = 0; row < num; row++) {
        for (int col = 0; col < num; col++) {
            cout << "*";
        }
        cout << endl;
    }
}
//Define the remaining functions below.

int addTwoNumbers(int a, int b) {
    return a + b;
}

int addThreeNumbers(int a, int b, int c) {
    return a + b + c;
}

double calculateRetail(double wholesalePrice, double markupPercentage) {
    cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);
    return wholesalePrice + (wholesalePrice * markupPercentage / 100);
}
