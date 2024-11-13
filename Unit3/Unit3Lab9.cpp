#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int size;
    int row, col;
    // Shape 1
    cout << "Shape 1" << endl;
    do {
        cout << "Enter a size between 10 and 30: "; cin >> size;
        if (size < 10 || size > 30) {
            cout << "Invalid size. Please enter a value between 10 and 30." << endl;
        }
    } while (size < 10 || size > 30);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
                cout << "*";
            } else if (row == 1 || row == size - 2 || col == 1 || col == size - 2) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    // Shape 2
    cout << "Shape 2" << endl;
    do {
        cout << "Enter a size greater than 5: "; cin >> size;
        if (size <= 5) {
            cout << "Invalid size. Please enter a value greater than 5." << endl;
        }
    } while (size <= 5);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1) {
                if (col < 2 || col >= size - 2) {
                    cout << "*";
                } else { 
                    cout << " ";
                }
            } else if (row == 1 || row == size - 2) {
                if (col < 1 || col >= size - 1) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            } else {
                if (col < 1 || col >= size - 1) {
                    cout << " ";
                } else {
                    cout << "*";
            }
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    // Shape 3:
    cout << "Shape 3" << endl;

    do {
        cout << "Enter a size greater than 7: "; cin >> size;
        if (size <= 7) {
            cout << "Invalid size. Please enter a value greater than 7." << endl;
        }
    } while (size <= 7);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
                cout << "*";
            } else if (row == 1 || row == size - 2 || col == 1 || col == size - 2) {
                cout << " ";
            } else if (row == 2 || row == size - 3 || col == 2 || col == size - 3) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n";

    //Shape 4 Hourglass
    cout << "Shape 4" << endl;
    do {
        cout << "Enter an odd value for size greater than 3: "; cin >> size;
        if (size <= 3 || size % 2 == 0) {
            cout << "Invalid size. Please enter an odd value greater than 3." << endl;
        }
    } while (size <= 3 || size % 2 == 0);

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (col == row || col == size - row - 1 || (col > row && col < size - row - 1) || (col < row && col > size - row - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n\n";
return 0;
}

