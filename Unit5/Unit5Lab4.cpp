#include <iostream>


using namespace std;


void reset(char rowA[], char rowB[], char rowC[], char rowD[]);

int showMenu();

void addReservation(char rowA[], char rowB[], char rowC[], char rowD[]);

void viewSeats(char rowA[], char rowB[], char rowC[], char rowD[]);

int main() {
    char rowA[20];
    char rowB[20];
    char rowC[20];
    char rowD[20];

    reset(rowA, rowB, rowC, rowD);

    int choice;
    do {
        choice = showMenu();
        switch (choice) {
            case 1:
                viewSeats(rowA, rowB, rowC, rowD);
                break;
            case 2:
                addReservation(rowA, rowB, rowC, rowD);
                break;
            case 3:
                reset(rowA, rowB, rowC, rowD);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
        }
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            cout << "Press any key to continue...";
            system("pause");
        }
    } while (choice != 4);

    return 0;
}


void reset(char rowA[], char rowB[], char rowC[], char rowD[]){
    system("clear");
    for (int i = 0; i < 20; ++i) {
        rowA[i] = 'O';
        rowB[i] = 'O';
        rowC[i] = 'O';
        rowD[i] = 'O';
    }
    cout << "Reservation initialized." << endl;
    cout << "Press any key to continue...";
    system("pause");
}

int showMenu(){
    system("clear");
    int choice;
    cout << "Airline Reservation System Menu:" << endl;
    cout << "\t\t1. View seat assignments." << endl;
    cout << "\t\t2. New Reservation" << endl;
    cout << "\t\t3. Reset the reservation system" << endl;
    cout << "\t\t4. EXIT" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please enter a number between 1 and 4: ";
        cin >> choice;
    }
    return choice;
}

void addReservation(char rowA[], char rowB[], char rowC[], char rowD[]) {
    system("clear");
    int row;
    char seat;
    cout << "Add a New Reservation" << endl;
    cout << "\n";
    cout << "Select row (1-20): "; cin >> row;
    while (row < 1 || row > 20) {
        cout << "Invalid row. Please enter a number between 1 and 20: "; cin >> row;
    }
    cout << "Select seat (A, B, C, or D): "; cin >> seat;
    while (seat != 'A' && seat != 'B' && seat != 'C' && seat != 'D' && seat != 'a' && seat != 'b' && seat != 'c' && seat != 'd') {
        cout << "Invalid seat. Please enter A, B, C, or D: ";
        cin >> seat;
    }
    if (seat >= 'a' && seat <= 'd') {
        seat = seat - 'a' + 'A';
    }

    bool seatTaken = false;
    switch (seat) {
        case 'A': seatTaken = (rowA[row - 1] == 'X'); break;
        case 'B': seatTaken = (rowB[row - 1] == 'X'); break;
        case 'C': seatTaken = (rowC[row - 1] == 'X'); break;
        case 'D': seatTaken = (rowD[row - 1] == 'X'); break;
    }

    if (seatTaken) {
        cout << "Seat " << row << seat << " is already taken. Please select another seat." << endl;
        cout << "Press any key to continue...";
        system("pause");
    } else {
        switch (seat) {
            case 'A': rowA[row - 1] = 'X'; break;
            case 'B': rowB[row - 1] = 'X'; break;
            case 'C': rowC[row - 1] = 'X'; break;
            case 'D': rowD[row - 1] = 'X'; break;
        }
        if (row >= 1 && row <= 5) {
            cout << "First Class Seat " << row << seat << " has been assigned!" << endl;
        } else {
            cout << "Economy Seat " << row << seat << " has been assigned!" << endl;
        }
        cout << "Press any key to continue...";
        system("pause");
    }
}

void viewSeats(char rowA[], char rowB[], char rowC[], char rowD[]) {
    system("clear");
    cout << "\t\t| A B   C D |" << endl;
    cout << "\t\t_____________" << endl;
    for (int i = 0; i < 20; ++i) {
        if (i == 5) {
            cout << "\t\t|-----------|" << endl;
        }
        cout << "Row " << i + 1 << "\t| " << rowA[i] << " " << rowB[i] << "   " << rowC[i] << " " << rowD[i] << " |" << endl;
        i++;
    }
    cout << "\t\t_____________" << endl;
    cout << "Press any key to continue...";
    system("pause");
}