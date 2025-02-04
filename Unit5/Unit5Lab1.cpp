3
    //Problem 1
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an integer: "; cin >> array[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array[i];
    }

    //Problem 2
    int Total = 0;
    for (int i = 0; i < 10; i++)
    {
        Total += array[i];
    }
    cout << "Total: " << Total << endl;

    //Problem 3
    double rain[12];

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the amount of rain for month " << i + 1 << " (inches): "; cin >> rain[i];
    }
    
    //Total Rainfall
    double totalRain = 0;
    for (int i = 0; i < 12; i++)
    {
        totalRain += rain[i];
    }

    //Average Rainfall
    cout << "Average Rainfall: " << totalRain / 12 << " inches" << endl;

    //Highest and Lowest Rainfall
    double highest = rain[0];
    double lowest = rain[0];
    for (int i = 0; i < 12; i++)
    {
        if (rain[i] > highest)
        {
            highest = rain[i];
        }
        if (rain[i] < lowest)
        {
            lowest = rain[i];
        }
    }




    return 0;
} 