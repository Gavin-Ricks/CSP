#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    int seedValue = time(0);
    srand(seedValue);
    int randomValue = rand();
    cout << setiosflags (ios::fixed | ios::showpoint);

//Problem 1: Property Tax
    cout << "Problem 1: " <<  endl;
    double pValue;
    cout << "Price of Property: $"; cin >> pValue;
    double asessment = pValue * 0.60;
    cout << "The assessment value is: $" << asessment << endl;
    double pTax = assessedValue * 0.0075;
    cout << "The property tax is: $" << pTax << endl;
    cout << "\n\n";

//Problem 2: Math Tutor
    cout << "Problem 2: " << endl;
    int minNum = 100;
    int maxNum = 500;
    int randomNum1 = (rand() % (maxNum - minNum + 1)) + minNum;
    int randomNum2 = (rand() % (maxNum - minNum + 1)) + minNum;
    cout << "Solve this, press enter when solved: " << endl;
    cout << " " << randomNum1 << endl;
    cout << "+" << randomNum2 << endl;
    cout << "------" << endl;
    getch();
    cout << randomNum1 + randomNum2 << endl;
    cout << "\n\n";
//Problem 3: Pizza PI
    cout << "Problem 3: " << endl;
    double PI = 3.14159;
    double sliceArea = 14.125; 
    double pizzaDiameter;
    cout << "Enter the diameter of the pizza in inches: "; cin >> pizzaDiameter;
    double pizzaRadius = pizzaDiameter / 2.0;
    double pizzaArea = PI * pizzaRadius * pizzaRadius;
    double numSlices = pizzaArea / sliceArea;
    cout << "The pizza can be divided into " << setprecision(2) << numSlices << " slices." << endl;
//Problem 4: How Many Pizzas?
    cout << "Problem 4: " << endl;
    int people;
    cout << "Enter the number of people at the party: "; cin >> people;
    double reqSlices = people * 4;
    double reqPizzas = reqSlices / people;
    cout << "You need " << reqPizzas << " pizzas for the party." << endl;
    cout << "Each pizza has " << reqSlices << " slices." << endl;

    return 0;
}
