// HelloTodd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    cout << "Hi. What is your name? ";
    getline(cin, firstName);
    cout << "What is your last name? ";
    getline(cin, lastName);
    cout << "Hello. " << firstName << " " << lastName << ".\n";
    int option;
    int radius;
    int length;
    int width;
    int A_Leg;
    int B_Leg;
    int square_root;
    const double pi = 3.14159;
    do {
        cout << ".\n" << "1.Calculate area of circle" << ".\n" << "2.Calculate the area of a rectangle" << ".\n" << "3.Calculate the hypotenuse of a right triangle" << ".\n" << "4.Exit" << ".\n" << "What would you like to do?" << ".\n";
        cin >> option;
        switch (option) {
        case 1:
            cout << "Please enter the radius of a circle: ";
            cin >> radius;
            cout << "The area of a circle with the radius of " << radius << " is " << pi * pow(radius, 2) << ".\n";
            break;
        case 2:
            cout << "Please enter the length of a rectangle: ";
            cin >> length;
            cout << "Please enter the width of a rectangle: ";
            cin >> width;
            cout << "The area of a rectangle with the length of " << length << " and the width of " << width << " is " << length * width << ".\n";
            break;
        case 3:
            cout << "Please enter the value for A leg: ";
            cin >> A_Leg;
            cout << "Please enter the value for B leg: ";
            cin >> B_Leg;
            cout << "The hypotenuse of a right triangle with A leg being " << A_Leg << " and B leg being " << B_Leg << " first equals to " << pow(A_Leg, 2) + pow(B_Leg, 2) = square_root << " " << sqrt(square_root);
            break;
        case 4:
            cout << "Goodbye, " << firstName;
            break;
        }
    } while (option != 4);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
