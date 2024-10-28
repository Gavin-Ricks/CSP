#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string color1, color2, mixedColor, type;

    cout << "Enter the first color: ";
    cin  >> color1;
    cout << "Enter the second color: ";
    cin >> color2;

    //Holy mother of if statements
    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
        mixedColor = "purple"; type = "secondary";
    } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
        mixedColor = "orange"; type = "secondary";
    } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
        mixedColor = "green"; type = "secondary";
    } else if ((color1 == "red" && color2 == "black") || (color1 == "black" && color2 == "red")) {
        mixedColor = "dark red"; type = "shade";
    } else if ((color1 == "red" && color2 == "white") || (color1 == "white" && color2 == "red")) {
        mixedColor = "light red"; type = "shade";
    } else if ((color1 == "blue" && color2 == "black") || (color1 == "black" && color2 == "blue")) {
        mixedColor = "dark blue"; type = "shade";
    } else if ((color1 == "blue" && color2 == "white") || (color1 == "white" && color2 == "blue")) {
        mixedColor = "light blue"; type = "shade";
    } else if ((color1 == "yellow" && color2 == "black") || (color1 == "black" && color2 == "yellow")) {
        mixedColor = "dark yellow"; type = "shade";
    } else if ((color1 == "yellow" && color2 == "white") || (color1 == "white" && color2 == "yellow")) {
        mixedColor = "light yellow"; type = "shade";
    } else if ((color1 == "purple" && color2 == "red") || (color1 == "red" && color2 == "purple")) {
        mixedColor = "Red Violet"; type = "tertiary";
    } else if ((color1 == "purple" && color2 == "blue") || (color1 == "blue" && color2 == "purple")) {
        mixedColor = "Blue Violet"; type = "tertiary";
    } else if ((color1 == "purple" && color2 == "black") || (color1 == "black" && color2 == "purple")) {
        mixedColor = "dark purple"; type = "shade";
    } else if ((color1 == "purple" && color2 == "white") || (color1 == "white" && color2 == "purple")) {
        mixedColor = "light purple"; type = "shade";
    } else if ((color1 == "orange" && color2 == "red") || (color1 == "red" && color2 == "orange")) {
        mixedColor = "Red Orange"; type = "tertiary";
    } else if ((color1 == "orange" && color2 == "yellow") || (color1 == "yellow" && color2 == "orange")) {
        mixedColor = "Yellow Orange"; type = "tertiary";
    } else if ((color1 == "orange" && color2 == "black") || (color1 == "black" && color2 == "orange")) {
        mixedColor = "dark orange"; type = "shade";
    } else if ((color1 == "orange" && color2 == "white") || (color1 == "white" && color2 == "orange")) {
        mixedColor = "light orange"; type = "shade";
    } else if ((color1 == "green" && color2 == "blue") || (color1 == "blue" && color2 == "green")) {
        mixedColor = "Blue Green"; type = "tertiary";
    } else if ((color1 == "green" && color2 == "yellow") || (color1 == "yellow" && color2 == "green")) {
        mixedColor = "Yellow Green"; type = "tertiary";
    } else if ((color1 == "green" && color2 == "black") || (color1 == "black" && color2 == "green")) {
        mixedColor = "dark green"; type = "shade";
    } else if ((color1 == "green" && color2 == "white") || (color1 == "white" && color2 == "green")) {
        mixedColor = "light green"; type = "shade";
    } else if ((color1 == "black" && color2 == "white") || (color1 == "white" && color2 == "black")) {
        mixedColor = "gray"; type = "shade";
    } else {
        mixedColor = "Invalid color combination"; type = "Invalid";
    }
    //Output the result
    if (mixedColor == "Invalid color combination") {
        cout << mixedColor << endl;
    } else {
        cout << "The mixed color is " << mixedColor;
        if (type == "shade") {
            cout << "."  << endl;
        } else if (type == "secondary"){
            cout << ", a secondary color." << endl;
        } else if (type == "tertiary") {
            cout << ", a tertiary color." << endl;
        }
    }

    return 0;
}
