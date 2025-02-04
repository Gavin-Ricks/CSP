#include<iostream>

using namespace std;

//User Input
int getComputersOrdered();
int getComputerStocked();
int getHandlingCharges();
int getSupply(int computerOrdered, int computerStocked); 
void totalCost(int computerPrice, int handlingCharges, int readyToShip);


//list the function prototypes here.
int main()
{
    int computerPrice = 1000;
    int computerOrdered = getComputersOrdered();
    int computerStocked = getComputerStocked();
    int handlingCharges = getHandlingCharges();
    int readyToShip = getSupply(computerOrdered, computerStocked);
    totalCost(computerPrice, handlingCharges, readyToShip);
    return 0;
}
//Add the function definitions here.

int getComputersOrdered(){
    int computer = 0;
    do {
        cout << "Enter the number of computers ordered: "; cin >> computer;
        if(computer < 1){
            cout << "Invalid. Enter a value greater than 1" << endl;
        }
    } while(computer < 1);
    return computer;
}


int getComputerStocked(){
    int computer = 0;
    do {
        cout << "Enter the number of computers in stock: "; cin >> computer;
        if(computer < 1){
            cout << "Invalid. Enter a value greater than 1" << endl;
        }
    } while(computer < 1);
    return computer;
}


int getHandlingCharges(){
    int charges = 10;
    char choice;
    do {
        do{
            cout << "Are there special charges? (y/n)"; cin >> choice;
        } while(choice != 'n' && choice != 'y');
        if (choice == 'y'){
            cout << "Enter the Shipping and Handling cost: "; cin >> charges;
            if(charges < 0){
                cout << "Invalid. Enter a value greater than 0" << endl;
            }
        }
    } while(charges < 0);
    return charges;
}

int getSupply(int computerOrdered, int computerStocked){
    int readyToShip = 0;
    if (computerOrdered > computerStocked){
        cout << "There are more computers ordered than computers in stock" << endl;
        cout << "Backorder is: " << computerOrdered - computerStocked << endl;
        readyToShip = computerStocked;
        cout << "There are " << readyToShip << " ready to ship from the current stock." << endl;
    } else if (computerOrdered < computerStocked){
            cout << "There are " << computerOrdered << " ready to ship from the current stock." << endl;
            readyToShip = computerOrdered;
        } else{
            cout << "There are " << computerOrdered << " ready to ship from the current stock." << endl;
            readyToShip = computerOrdered;
        }
    return readyToShip;

}

void totalCost(int computerPrice, int handlingCharges, int readyToShip){
    cout << "Subtotal of the portion ready to ship $" << computerPrice * readyToShip << endl;
    cout << "Shipping and Handling charges $" << handlingCharges * readyToShip << endl;
    cout << "Total cost $" << (computerPrice * readyToShip) + (handlingCharges * readyToShip) << endl;
}


