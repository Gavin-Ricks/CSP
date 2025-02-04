//Add the appropriate preprocessor directives here.
#include <iostream>
#include "conio.h"

 

//Add the function prototypes hereinitia
void initialize(char f[][25]);
void move(char f[][25], char dir);
void display(char f[][25]);



using namespace std;

 

//Globals – Starting and current position of the turtle in the field.

int tr=1; //Global Row Val 4 Turtle
int tc=1; //Global Col Val 4 Turtle

 

int main()
{

     

char field[20][25];     //Create the field array.
initialize(field);      //Initialize the field array.

 

display(field);         //Display the field.

 

char dir;
do{

//Show menu options
cout << "\t 8 - Move Up" << endl;
cout << "\t 2 - Move Down" << endl;
cout << "\t 4 - Move Left" << endl;
cout << "\t 6 - Move Right" << endl;
cout << "\t 0 - Exit" << endl;

 

dir = getch();          //Get move option from the keyboard.

if(dir != '0')
      move(field, dir); //Move the turtle.

 

}while(dir != '0');

return 0;
}

 

//Function Definitions – TO DO

void initialize(char f[][25])
{
    for(int row = 0; row < 20; row++){
        for(int col = 0; col < 25; col++){
            f[row][col] = ' ';
        }
    }
    f[tr][tc] = 'O';
}

 

void display(char f[][25])
{
    for(int row = 0; row < 20; row++){
        for(int col = 0; col < 25; col++){
            if(f[row][col] == 'O'){
                cout << "\tCurrent Location: " << row <<  ", " << col << endl;
                break;
            }
        }
    }
    cout << "\t===========================" << endl;
    for (int row = 0; row < 20; row++){
        cout << "\t|";
        for(int col = 0; col < 25; col++){
            cout << f[row][col];
        }
        cout << "|" << endl;
    }
    cout << "\t===========================" << endl;
}

 

void move(char f[][25], char dir)
{
    //Will Change before checking if it's possible to move in that direction, change this code so that it would replace O with * in the switch statement...
    //Finding the 'O' Value
    for(int row = 0; row < 20; row++){
        for(int col = 0; col < 25; col++){
            if(f[row][col] == 'O'){
                f[row][col] = '*'; //Replacing 'O' with '*'
                break;
            }
        }
    }
    
    //Direction
    switch (dir){
        case 8:
        //This is up
        if(tr > 0){
            tr = tr - 1;
            f[tr][tc] = 'O';
        }
        
        break;
        case 2:
        //This is down
        if(tr < 20){
            tr = tr + 1;
            f[tr][tc] = 'O';
        }
        break;
        case 4:
        //This is left
        if(tc > 0){
            tc = tc - 1;
            f[tr][tc] = 'O';
        }
        break;
        case 6:
        //This is right
        if(tc < 25){
            tc = tc + 1;
            f[tr][tc] = 'O';
        }
        break;
        default:
        //nothing
        break;
    }
    display(f);

}
