#include<iostream>
#include<iomanip>

using namespace std;

//list the function prototypes here.
void shape1(int);
void shape2(int);
void shape3(int);
int main()
{
int size;
//Shape 1
    do {
       cout << "Enter a size greater than 5 for shape 1: "; cin >> size;
        if (size <= 5) {
            cout << "Invalid size. Please enter a value greater than 5." << endl;
        }
    } while (size <= 5);
shape1(size);
cout << endl << endl;

//Shape 2
 do {
      cout << "Enter a size greater than 7 for shape 2: "; cin >> size;
    if (size <= 7) {
          cout << "Invalid size. Please enter a value greater than 7." << endl;
       }
 } while (size <= 7);
shape2(size);
cout << endl << endl;

cout << "Enter an odd value for size greater than 3 for shape 3: "; cin >> size;
//Add the function call to create shape 3 passing to it size.
shape3(size);
return 0;
}

//Add the function definitions here.
void shape1(int size){
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
}

void shape2(int size){
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
}

void shape3(int size){
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row <= size / 2) {
                if (col >= size / 2 - row && col <= size / 2 + row) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                if (col >= row - size / 2 && col < size - (row - size / 2)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}