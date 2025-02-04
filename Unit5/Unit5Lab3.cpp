#include <iostream>
using namespace std;
//Function prototypes of functions that receive an array.

int greaterThanN(int problem1[5], int n);
void swap(int numbers[10], int swaps1, int swaps2);
void sort(int numbers[10]);


int main(){
    //Problem 1 - Larger than n
    int n;
    int problem1[5] = {1, 2, 3, 4, 5};
    greaterThanN(problem1, n);
    cout << "\n\n";

    //Problem 2 - Swap Function
    int numbers[10] = {12, 31, 14, 21, 43 , 32, 54, 24, 11, 2};
    int swaps1, swaps2;
    //Display the array
    for(int i = 0; i < 10; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter the first number to swap (1-10): "; cin >> swaps1;
    cout << "Enter the second number to swap (1-10): "; cin >> swaps2;
    swap(numbers, swaps1, swaps2);

    //Problem 3 - Almost Sort 
    sort(numbers);
    cout << "The new array is: ";
    for(int i = 0; i < 10; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}

int greaterThanN(int problem1[5], int n){
    cout << "Enter a number: "; cin >> n;
    cout << "Numbers greater than " << n << " are: ";
    for(int i = 0; i < 5; i++){
        if(problem1[i] > n){
            cout << problem1[i] << " ";
        }
    }
    cout << endl;
}

void swap(int numbers[10], int swaps1, int swaps2){
    int change = numbers[swaps1 - 1];
    numbers[swaps1 - 1] = numbers[swaps2 - 1];
    numbers[swaps2 - 1] = change;
    cout << "The new array is: ";
    for(int i = 0; i < 10; i++){
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void sort(int numbers[10]){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9 - i; j++){
                if(numbers[j] > numbers[j + 1]){
                    swap(numbers, j + 1, j + 2);
                }
            }
        }
    }

