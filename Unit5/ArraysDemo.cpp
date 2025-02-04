#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
//Create an array of 5 integers
int array[5];
//Assign i to each element in the array.
for(int i=0; i<5; i++){
    array[i] = i;
}
//Output each element value in the array.
for(int i=0; i<5; i++){
    cout << array[i] << endl;
}
//Add up all values in the array.
int total = 0;
for(int i=0; i<5; i++){
    total += array[i];
}
cout << "Total: " << total << endl;
//What if you do not know the how many values are in an array?
//Get a random value for the size of the array.
int seed = time(0);
srand(seed);
int random = rand();
int size = (rand() % 10) + 10;
//Create the array to the random size.
int nums2[size];
cout << endl << endl;
// Get the length of the array (number of elements it stores)

cout << endl << endl;
//sizeof(nums2) wll return the total size (memory storage size) of the array.
int length = sizeof(nums2)/sizeof(nums2[0]); //Arrays store the same data types which all are the same size. Total size / individual size = number of elements.
cout << length << endl;
//Assign value to each element of nums2 array;
for(int i = 0; i < length; i++){
    nums2[i] = i;
}
//Ouptput each value in nums2
for(int i=0; i<length; i++){
    cout << nums2[i] << endl;
}
return 0;
}