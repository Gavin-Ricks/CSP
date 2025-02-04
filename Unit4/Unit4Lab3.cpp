#include<iostream> //This header file will allow for input and output
#include <iomanip> //This header file will allow for formatting
#include <ctime> //This header file will access the system time.
#include <cstdlib> //This header has the srand() and rand() method definitions

using namespace std;

//function prototypes here.
void fallingDistance(double);
void toCelsius(int);
void coinToss(int);
int getScore();
int findLowest(int, int, int, int, int);
void calcAverage(int, int, int, int, int);

//The main method (starting point)
int main()
{
     cout << setiosflags(ios::fixed | ios::showpoint);

    //  //Problem 1
    //  cout << "Problem 1" << endl << endl;
    //  double secs = 0;
    //  cout << "How many seconds has the object fallen: "; cin >> secs;
    //  cout << endl;
    //  fallingDistance(secs);
    //  cout << endl << endl;

    //  //Problem 2
    //  cout << "Problem 2" << endl << endl;
    //  int fahrenheit = 0;
    //  cout << "Enter a temperature in Fahrenheit greater than 50: ";
    //  cin >> fahrenheit;
    //  cout << endl;
    //  toCelsius(fahrenheit);
    //  cout << endl << endl;

    //  //Problem 3
    //  cout << "Problem 3" << endl << endl;
    //  int turns = 0;
    //  cout << "How many simulations sold be run: ";
    //  cin >> turns;
    //  cout << endl;
    //  coinToss(turns);
    //  cout << endl << endl;

     //Problem 4
     cout << "Problem 4" << endl << endl;
     int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
     s1 = getScore();
     s2 = getScore();
     s3 = getScore();
     s4 = getScore();
     s5 = getScore();
     calcAverage(s1, s2, s3, s4, s5);
}
//Add the Problem functions definitions here.
//Problem 1
void fallingDistance(double secs)
{
    cout << setiosflags(ios::fixed | ios::showpoint);
    for (int i = 1; i <= secs; i++){
        cout << i << " seconds: " << setprecision(1)<< (0.5 * 9.8 * i * i) << " meters" << endl;
    }
}

//Problem 2
void toCelsius(int f)
{
    cout << setiosflags(ios::fixed | ios::showpoint);
    
    for (int i  = 50; i <= f; i++){
        cout << i << "f " << (5.0/9.0 * (i - 32)) << "c" << endl;
    }
    
}

//Problem 3
void coinToss(int turns)
{
    srand(time(0));
    int heads = 0, tails = 0;
    for (int i = 1; i <= turns; i++){
        if (rand() % 2 == 0){
            cout << i << ": Heads" << endl;
            heads++;
        } else {
            cout << i << ": Tails" << endl;
            tails++;
        }
    }
    cout << heads << " - heads" << endl;
    cout << tails << " - tails" << endl;
}

// Problem 4 and Functions
int getScore()
{
    int score;
    do {
        cout << "Enter a score: ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Invalid score. Please enter a score between 0 - 100" << endl;
        }
    } while (score < 0 || score > 100);
    return score;
}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
    int lowest = s1;

    if (s2 < lowest) {
        lowest = s2;
    }
    if (s3 < lowest) {
        lowest = s3;
    }
    if (s4 < lowest) {
        lowest = s4;
    }
    if (s5 < lowest) {
        lowest = s5;
    }

    return lowest;
}

void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
    int lowest = findLowest(s1, s2, s3, s4, s5);
    int total = s1 + s2 + s3 + s4 + s5 - lowest;
    double average = total / 4.0;
    cout << "The average of the four highest scores is: " << setprecision(1) << average << endl;

}