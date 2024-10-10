#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // // Problem 1: Ingredient Adjuster
    // cout << "Problem 1" << endl;
    // int cookies;
    // double sugarPerCookie = 1.5 / 48;
    // double butterPerCookie = 1.0 / 48;
    // double flourPerCookie = 2.75 / 48;
    // cout << "Enter the number of cookies you want to make: "; cin >> cookies;
    // cout << setprecision(3) << sugarPerCookie * cookies << " cups of sugar." << endl;
    // cout << setprecision(3) << butterPerCookie * cookies << " cups of butter" << endl;
    // cout << setprecision(3) << flourPerCookie * cookies << " cups of flour" << endl;
    // cout << "\n\n";

    // // Problem 2: Box Office
    // cout << "Problem 2" << endl;
    // string movie;
    // int adult, child;
    // double adultPrice = 10.00;
    // double childPrice = 6.00;
    // cout << "Movie Name:\t\t\t"; cin.ignore(); getline(cin, movie);
    // cout << "Adult Tickets Sold:\t\t"; cin >> adult;
    // cout << "Child Tickets Sold:\t\t"; cin >> child;
    // double gross = (adult * adultPrice) + (child * childPrice);
    // double net = gross * 0.2;
    // double distributor = gross - net;
    // cout << fixed << setprecision(2) << "Gross box office profit:\t$" << gross << endl;
    // cout << fixed << setprecision(2) << "Net box office profit:\t\t$" << net << endl;
    // cout << fixed << setprecision(2) << "Amount paid to distributor:\t$" << distributor << endl;
    // cout << "\n\n";

    // // Problem 3: How Many Widgets?
    // cout << "Problem 3" << endl;
    // double palletWeight, totalWeight;
    // double widgetWeight = 12.5;
    // cout << "Enter the weight of the pallet (empty): "; cin >> palletWeight;
    // cout << "Enter the total weight of the pallet with widgets: "; cin >> totalWeight;
    // int numWidgets = (totalWeight - palletWeight) / widgetWeight;
    // cout << "The number of widgets on the pallet is: " << numWidgets << endl;
    // cout << "\n\n";

    // Problem 4: How Many Calories
    int cookiesPerBag, servingsPerBag, caloriesPerServing;
    cout << "Enter the number of cookies per bag: ";
    cin >> cookiesPerBag;
    cout << "Enter the number of servings per bag: ";
    cin >> servingsPerBag;
    cout << "Enter the number of calories per serving: ";
    cin >> caloriesPerServing;
    int cookiesEaten;
    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;
    int totalCalories = (cookiesEaten * servingsPerBag * caloriesPerServing) / cookiesPerBag;
    cout << "Total calories consumed: " << totalCalories << endl;

    // // Problem 5: How Much Insurance
    // double replacementCost, insuranceRate;
    // cout << "Enter the replacement cost of the building: ";
    // cin >> replacementCost;
    // cout << "Enter the insurance rate (as a decimal): ";
    // cin >> insuranceRate;
    // double insuranceAmount = replacementCost * insuranceRate;
    // cout << "The minimum amount of insurance you should buy for the property is: $" << fixed << setprecision(2) << insuranceAmount << endl;

    // // Problem 6: Celsius to Fahrenheit
    // double celsius, fahrenheit;
    // cout << "Enter the temperature in Celsius: ";
    // cin >> celsius;
    // fahrenheit = (celsius * 9 / 5) + 32;
    // cout << "The temperature in Fahrenheit is: " << fixed << setprecision(2) << fahrenheit << endl;

    // // Problem 7: Currency
    // double dollars, yen, euros, yenPerDollar, eurosPerDollar;
    // cout << "Enter the conversion rate from dollars to yen: ";
    // cin >> yenPerDollar;
    // cout << "Enter the conversion rate from dollars to euros: ";
    // cin >> eurosPerDollar;
    // cout << "Enter the amount in US dollars: ";
    // cin >> dollars;
    // yen = dollars * yenPerDollar;
    // euros = dollars * eurosPerDollar;
    // cout << fixed << setprecision(2) << "Equivalent in Japanese Yen: ¥" << yen << endl;
    // cout << "Equivalent in Euros: €" << euros << endl;

    // // Problem 8: Monthly Sales Tax
    // string month;
    // int year;
    // double totalCollected, sales, countyTax, stateTax, totalTax, countyTaxRate, stateTaxRate;
    // cout << "Enter the county sales tax rate (as a decimal): ";
    // cin >> countyTaxRate;
    // cout << "Enter the state sales tax rate (as a decimal): ";
    // cin >> stateTaxRate;
    // cout << "Enter the month: ";
    // cin >> month;
    // cout << "Enter the year: ";
    // cin >> year;
    // cout << "Enter the total amount collected at the cash register: ";
    // cin >> totalCollected;
    // sales = totalCollected / (1 + countyTaxRate + stateTaxRate);
    // countyTax = sales * countyTaxRate;
    // stateTax = sales * stateTaxRate;
    // totalTax = countyTax + stateTax;
    // cout << "Month: " << month << " " << year << endl;
    // cout << "--------------------------" << endl;
    // cout << fixed << setprecision(2) << "Total Collected:\t$" << totalCollected << endl;
    // cout << "Sales:\t\t\t$" << sales << endl;
    // cout << "County Sales Tax:\t$" << countyTax << endl;
    // cout << "State Sales Tax:\t$" << stateTax << endl;
    // cout << "Total Sales Tax:\t$" << totalTax << endl;

return 0;
}