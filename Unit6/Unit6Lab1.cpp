//Add the appropriate preprocessor directives here.
#include <iostream>
#include <random>
#include "conio.h"

 

//Add the function prototypes hereinitia
void initialize(char f[][25]);
void move(char f[][25], char dir);
void display(char f[][25]);
void placeRock(char f[][25]);



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
    placeRock(f);
}

 

void display(char f[][25])
{
    system("clear");
    cout << "\tCurrent Location: " << tr <<  ", " << tc << endl;
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
    switch (dir){
        case '8':
        // Move up
        if(tr > 0){
            if(f[tr-1][tc] == 'X'){
                break;
            }
            f[tr][tc] = '*';
            tr = tr - 1;
            f[tr][tc] = 'O';
        }
        break;
        case '2':
        // Move down
        if(tr < 19){
            if(f[tr+1][tc] == 'X'){
                break;
            }
            f[tr][tc] = '*';
            tr = tr + 1;
            f[tr][tc] = 'O';
        }
        break;
        case '4':
        // Move left
        if(tc > 0){
            if(f[tr][tc-1] == 'X'){
                break;
            }
            f[tr][tc] = '*';
            tc = tc - 1;
            f[tr][tc] = 'O';
        }
        break;
        case '6':
        // Move right
        if(tc < 24){
            if(f[tr][tc+1] == 'X'){
                break;
            }
            f[tr][tc] = '*';
            tc = tc + 1;
            f[tr][tc] = 'O';
        }
        break;
    }
    display(f);
}   

void placeRock(char f[][25])
{
    int rocksPlaced = 0;

    //Place first rock
    int row = rand() % 17 + 3;
    int col = rand() % 22 + 3;
    f[row][col] = 'X';
    f[row+1][col] = 'X';
    f[row][col+1] = 'X';
    f[row+1][col+1] = 'X';
    rocksPlaced++;

    //Place the rest of the rocks
    do{
        row = rand() % 15 + 3;
        col = rand() % 20 + 3;
        if(f[row][col] == ' ' && f[row+1][col] == ' ' && f[row][col+1] == ' ' && f[row+1][col+1] == ' '){
            f[row][col] = 'X';
            f[row+1][col] = 'X';
            f[row][col+1] = 'X';
            f[row+1][col+1] = 'X';
            rocksPlaced++;
        }
    } while(rocksPlaced < 3);
}