#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    //Problem 4
    string names[5];
    int jarsSold[5];
    names[0] = "Mild";
    names[1] = "Medium";
    names[2] = "Sweet";
    names[3] = "Hot";
    names[4] = "Zesty";

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number of jars sold for " << names[i] << " salsa: "; cin >> jarsSold[i];
    }

    //Total Sales
    int totalSales = 0;
    for (int i = 0; i < 5; i++)
    {
        totalSales += jarsSold[i];
    }

    //Sales Report
    cout << "Sales Report" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << names[i] << ": " << jarsSold[i] << " jars" << endl;
    }
    cout << "Total Sales: " << totalSales << " jars" << endl;
    cout << "\n\n";
    //Highest and Lowest
    int highest = jarsSold[0];
    int lowest = jarsSold[0];
    for (int i = 0; i < 5; i++)
    {
        if (jarsSold[i] > highest)
        {
            highest = jarsSold[i];
        }
        if (jarsSold[i] < lowest)
        {
            lowest = jarsSold[i];
        }
    }
    cout << "Highest Selling Salsa: " << highest << endl;
    cout << "Lowest Selling Salsa: " << lowest << endl;

    return 0;
}