/******************************************************************************
# Author:           Lucy Price
# Assignment:       Assignment 2 - Oreo Calculation Program
# Date:             April 18, 2026
# Description:      This Program will calculate the number of calories and
#                   servings consumed by the user after they input the number
#                   of Oreo cookies they consumed.
# Input:            numCookies as int
# Output:           numServings and numCalories as doubles
# Sources:          Assignment 2 resources, example code, & algorithm document
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main() {

//declare variables
const int CALORIESC = 160;
const int SERVINGSC = 5;
int numCookies = 0;
double numCalories = 0.0;
double numServings = 0.0;
 
//user input and welcome message
cout << "Welcome to the Oreo Calculation Program!" << endl;
cout << endl;
cout << "How many Oreos have you eaten?: ";
cin >> numCookies;
cout << endl;

//calculations
numServings = static_cast<double> (numCookies) / SERVINGSC;
numCalories = numServings * CALORIESC;

//output to user
//set fixed and output to one decimal point
cout << fixed << showpoint << setprecision(1);
cout << "You have consumed:" << endl;
cout << endl;
cout << numServings << " Servings" << endl;
cout << numCalories << " Calories" << endl;
cout << endl;
cout << "Enjoy!" << endl;
cout << endl;

  return 0;
}


