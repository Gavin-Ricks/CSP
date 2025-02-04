#include <iostream>

//Calling functions 
void display(int[][10]);
void display(int[][3]);

//naming gamerspaces
using namespace std;


//Main Introduction
int main()
{
    int box[10][10];
    box[5][5] = 1000;
int count = 1;
for(int row = 0; row < 10; row++)
{
     for(int col = 0; col < 10; col++)
     {
          box[row][col] = count;
          count++;
     }
}
display(box);
cout << endl;
return 0;
}
  
void display(int b[][10])
{
for(int row=0; row<10; row++)
{
     for(int col=0; col<10; col++)
          cout << b[row][col] << "\t";
     cout << endl;
}
cout << endl << endl;
}

void display(int b[][3])
{
for(int row=0; row<10; row++)
{
     for(int col=0; col<10; col++)
          cout << b[row][col] << "\t";
     cout << endl;
}
cout << endl << endl;
}
