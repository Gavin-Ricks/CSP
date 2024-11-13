#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    cout << setiosflags(ios::fixed | ios::showpoint);
    int seed = time(0);
    srand(seed);

    // Problem 1: 
    cout << "Problem 1" << endl;
    int min = 1, max = 500;
    int random = (rand() % (max - min + 1)) + min;
    int guesses;
    int maxAttempts = 10;

    cout << "Guess the number between 1 and 500: ";

    for (int i = 0; i < maxAttempts; i++) {
        cin >> guesses;

        if (guesses > random) {
            cout << "Too high, try again." << endl;
        } else if (guesses < random) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << i + 1 << " attempts." << endl;
            break;
        }

        if (i == maxAttempts - 1) {
            cout << "Lose! The number was " << random << "." << endl;
        }
    }
    cout << "\n\n";

    // Problem 2: Square Display
    cout << "Problem 2" << endl;
    int size;
    do {
        cout << "Enter a positive integer from 2 to 15: "; cin >> size;
    } while (size < 2 || size > 15);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col< size; col++) {
            cout << 'X';
        }
        cout << endl;
    }
    cout << "\n\n";

    // Problem 3: Triangle Pattern Display
    cout << "Problem 3" << endl;
    int height;
    do {
        cout << "Enter a positive integer from 2 to 20: "; cin >> height;
    } while (height< 2 || height > 20);

    for (int row= 1; row<= height; row++) {
        for (int col= 0; col< row; col++) {
            cout << '#';
        }
        cout << endl;
    }
    cout << "\n\n";

    // Problem 4: Square Pattern Display
    cout << "Problem 4" << endl;
    do {
        cout << "Enter a positive integer from 2 to 20: "; cin >> size;
    } while (size < 2 || size > 20);

    for (int row= 0; row< size; row++) {
        for (int col= 0; col< size; col++) {
            if (row== 0 || row== size - 1 || col== 0 || col== size - 1) {
                cout << '#';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    // Problem 5: Enhanced Triangle Pattern Display
    cout << "Problem 5" << endl;
    do {
        cout << "Enter a positive integer from 2 to 20: ";cin >> height;
    } while (height < 2 || height > 20);

    for (int row= 1; row<= height; row++) {
        for (int col= 1; col<= height; col++) {
            if (col<= height - row) {
                cout << ' ';
            } else {
                cout << '#';
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    return 0;
}
