#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <chrono> 
#include <thread>

using namespace std;
using namespace chrono; 
using namespace this_thread;

// Function Prototypes here.
int diceRoll();
void stop();
int getSumDice(int rolls);
void showDice(int die);
int getP1Guess(string p1Name);
int getP2Guess(string p1Name, string p2Name, int p1Guess);
void clearScreen();
void rules();
int determineWinner(int sum, string p1Name, string p2Name, int p1Guess, int p2Guess);
void determineTotalWinner(string p1Name, string p2Name, int p1Wins, int p2Wins);
void finalShowdown(string p1Name, string p2Name);


int main(){
    // Seed random number generator
    int seedValue = time(0);
    srand(seedValue);

    // Rules
    rules();

    // Variables
    int rounds = 1, rolls = 1;
    int die;
    int sum = 0; 
    int p1Guess = 0;
    int p2Guess = 0;
    int p1Wins = 0, p2Wins = 0;
    int winner;
    string p1Name, p2Name;

    // Asking for Rounds & Names
    do {
        cout << "How many rounds would you like to play? (1,3,5) >>> "; cin >> rounds;
        if (rounds == 1 || rounds == 3 || rounds == 5) {
            cout << "Enter Player 1 Name >>> "; cin >> p1Name;
            cout << "Enter Player 2 Name >>> "; cin >> p2Name;
        } else {
            cout << "Invalid Number of Rounds" << endl;
        }
    } while (rounds != 1 && rounds != 3 && rounds != 5);
    stop();

    // Clear Screen
    clearScreen();

    // Game
    for (int i = 1; i <= rounds; i++) {
        cout << "Round " << i << endl;
        cout << "\n\n";

        // Dice Rolls
        do {
            cout << "How many dice rolls in this round? (1-10) >> "; cin >> rolls;
            if (rolls > 10 || rolls < 1) {
                cout << "Invalid. Enter a number between 1 and 10" << endl;
            }
        } while (rolls > 10 || rolls < 1);

        // Player Guess
        p1Guess = getP1Guess(p1Name);
        p2Guess = getP2Guess(p1Name, p2Name, p1Guess);
        cout << "\n\n";
        cout << p1Name << " guess >>> " << p1Guess << endl;
        cout << p2Name << " guess >>> " << p2Guess << endl;
        cout << "\n\n";
        stop();

        
        // Dice Game
        sum = getSumDice(rolls);
        sleep(2);
        clearScreen();

        // Determine Winner
        winner = determineWinner(sum, p1Name, p2Name, p1Guess, p2Guess);
        if (winner == 0) {
            p1Wins++;
        } else if (winner == 1) {
            p2Wins++;
        }
        sleep(2);
        stop();
        clearScreen();
    }

    // Determine Total Winner
    determineTotalWinner(p1Name, p2Name, p1Wins, p2Wins);

    //Play Again?
    char playAgain;
    cout << "Would you like to play again? (y/n) >>> "; cin >> playAgain;
    if (playAgain == 'y') {
        main();
    } else {
        cout << "Thanks for playing!" << endl;
    }

    return 0;
}

// Function Definitions here

// Clear Screen Function
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Player Guess
int getP1Guess(string p1Name) {
    int guess = 0;
    do {
        cout << p1Name << " enter your guess (1-60) >>> "; cin >> guess;
        if (guess > 60 || guess < 1) {
            cout << "Invalid. Guess must be between 1 and 60. Try again" << endl;
        }
    } while (guess > 60 || guess < 1);
    return guess;
}

int getP2Guess(string p1Name, string p2Name, int p1Guess) {
    int guess = 0;
    do {
        cout << p2Name << " enter your guess (1-60) >>> "; cin >> guess;
        if (guess > 60 || guess < 1) {
            cout << "Invalid. Guess must be between 1 and 60. Try again" << endl;
        }
        if (guess == p1Guess) {
            cout << "Invalid. Guess cannot be the same as " << p1Name << "'s guess. Try again." << endl;
        }
    } while (guess > 60 || guess < 1 || guess == p1Guess);
    return guess;
}

// Dice Functions
int getSumDice(int rolls) {
    int sum = 0;
    cout << "Rolling Dice..." << endl;
    sleep(2);
    clearScreen();
    for (int i = 1; i <= rolls; i++) {
        cout << "Roll " << i << endl;
        sleep(2);
        clearScreen();
        sum += diceRoll();
    }
    return sum;
}

int diceRoll() {
    int die = rand() % 6 + 1;
    showDice(die);
    return die;
}

void showDice(int die) {
    int random = rand() % 6 + 1;
    int random2 = rand() % 6 + 1;
    for (int i = 0; i < 5; i++) {
        random2 = rand() % 6 + 1;
        switch (random2) {
            case 1:
                cout << "---------" << endl;
                cout << "|       |" << endl;
                cout << "|   *   |" << endl;
                cout << "|       |" << endl;
                cout << "---------" << endl;
                break;
            case 2:
                cout << "---------" << endl;
                cout << "| *     |" << endl;
                cout << "|       |" << endl;
                cout << "|     * |" << endl;
                cout << "---------" << endl;
                break;
            case 3:
                cout << "---------" << endl;
                cout << "| *     |" << endl;
                cout << "|   *   |" << endl;
                cout << "|     * |" << endl;
                cout << "---------" << endl;
                break;
            case 4:
                cout << "---------" << endl;
                cout << "| *   * |" << endl;
                cout << "|       |" << endl;
                cout << "| *   * |" << endl;
                cout << "---------" << endl;
                break;
            case 5:
                cout << "---------" << endl;
                cout << "| *   * |" << endl;
                cout << "|   *   |" << endl;
                cout << "| *   * |" << endl;
                cout << "---------" << endl;
                break;
            case 6:
                cout << "---------" << endl;
                cout << "| *   * |" << endl;
                cout << "| *   * |" << endl;
                cout << "| *   * |" << endl;
                cout << "---------" << endl;
                break;
        }
        sleep_for(nanoseconds(500000000));
        clearScreen();
    }
    switch (die) {
        case 1:
            cout << "---------" << endl;
            cout << "|       |" << endl;
            cout << "|   *   |" << endl;
            cout << "|       |" << endl;
            cout << "---------" << endl;
            break;
        case 2:
            cout << "---------" << endl;
            cout << "| *     |" << endl;
            cout << "|       |" << endl;
            cout << "|     * |" << endl;
            cout << "---------" << endl;
            break;
        case 3:
            cout << "---------" << endl;
            cout << "| *     |" << endl;
            cout << "|   *   |" << endl;
            cout << "|     * |" << endl;
            cout << "---------" << endl;
            break;
        case 4:
            cout << "---------" << endl;
            cout << "| *   * |" << endl;
            cout << "|       |" << endl;
            cout << "| *   * |" << endl;
            cout << "---------" << endl;
            break;
        case 5:
            cout << "---------" << endl;
            cout << "| *   * |" << endl;
            cout << "|   *   |" << endl;
            cout << "| *   * |" << endl;
            cout << "---------" << endl;
            break;
        case 6:
            cout << "---------" << endl;
            cout << "| *   * |" << endl;
            cout << "| *   * |" << endl;
            cout << "| *   * |" << endl;
            cout << "---------" << endl;
            break;
    }
    cout << "\nNumber Rolled >>> " << die << endl;
    cout << "\n\n";
    sleep(1);
    stop();
    clearScreen();
}

// Rules
void rules(){
    char verify;
    cout << "Welcome to the Dice Guessing Game!" << endl;
    cout << "Rules:" << endl;
    do {
        cout << "1. You will choose the amount of dice rolls (1-10)" << endl;
        cout << "2. Both P1 and P2 will guess the sum of the dice rolls" << endl;
        cout << "3. The player with the closest guess wins!" << endl;
        cout << "4. Both players cannot guess the same number" << endl;
        cout << "5. If both players are the same distance from the sum, it is a tie! (No points awarded)" << endl;
        cout << "6. The player with the most points after (1,3,5) rounds wins!" << endl;
        cout << "\n\n";
        cout << "If you understand, type (y). If not type (n) >>> "; cin >> verify;
    } while (verify != 'y');

    // Clear Screen
    if (verify == 'y') {
        clearScreen();
    }
}

// Determine Winner
int determineWinner(int sum, string p1Name, string p2Name, int p1Guess, int p2Guess) {
    int absP1 = abs(sum - p1Guess);
    int absP2 = abs(sum - p2Guess);
    cout << "Sum of Dice Rolls >>> " << sum << endl;
    cout << '\n';
    if (absP1 < absP2) {
        cout << p1Name << " wins this round!" << endl;
        return 0;
    } else if (absP1 > absP2) {
        cout << p2Name << " wins this round!" << endl;
        return 1;
    } else {
        cout << "It's a tie! No winner"<< endl;
        return 2;
    }
}

// Determine Total Winner
void determineTotalWinner(string p1Name, string p2Name, int p1Wins, int p2Wins) {
    cout << "Final Winner:" << endl;
    cout << p1Name << " wins: " << p1Wins << endl;
    cout << p2Name << " wins: " << p2Wins << endl;

    if (p1Wins > p2Wins) {
        cout << p1Name << " is the overall winner!" << endl;
    } else if (p2Wins > p1Wins) {
        cout << p2Name << " is the overall winner!" << endl;
    } else {
        cout << "It's a tie! Initiating final showdown..." << endl;
        sleep(2);
        stop();
        finalShowdown(p1Name, p2Name);
    }
}

// Final Showdown
void finalShowdown(string p1Name, string p2Name) {
    clearScreen();
    cout << "Welcome to the Final Showdown!" << endl;
    sleep(2);
    cout << "This is a sudden death round!" << endl;
    sleep(2);
    cout << "There will be one dice roll..." << endl;
    sleep(2);
    cout << "The player with the closest roll wins!" << endl;
    sleep(2);
    cout << "If it's a tie, the game will continue until we have a winner!" << endl;
    sleep(2);
    cout << "Let's begin!" << endl;
    sleep(2);
    stop();
    clearScreen();
    
    //Variables
    int rolls = 1;
    int die;
    int sum = 0; 
    int p1Guess = 0;
    int p2Guess = 0;
    int p1Wins = 0, p2Wins = 0;
    int winner;
    int absP1, absP2;

    // Player Guess
    p1Guess = getP1Guess(p1Name);
    p2Guess = getP2Guess(p1Name, p2Name, p1Guess);
    cout << "\n\n";
    cout << p1Name << " guess >>> " << p1Guess << endl;
    cout << p2Name << " guess >>> " << p2Guess << endl;
    cout << "\n\n";
    stop();

        
    

    // Determine Winner
    do{
        // Dice Game
        sum = getSumDice(rolls);
        sleep(2);
        stop();
        clearScreen();

        // Determine Winner
        absP1 = abs(sum - p1Guess);
        absP2 = abs(sum - p2Guess);

        cout << "Sum of Dice Rolls >>> " << sum << endl;
        cout << '\n';
        if (absP1 < absP2) {
            cout << p1Name << " wins the game!" << endl;
        } else if (absP1 > absP2) {
            cout << p2Name << " wins the game!" << endl;
        } else {
            cout << "It's a tie! No winner"<< endl;
            sleep(2);
            stop();
            clearScreen();
        } 
    } while (absP1 == absP2);
}

// User Input Pause
void stop() {
    cout << "Press Enter to Continue..." << endl;
    cin.ignore();
    cin.get();
}
