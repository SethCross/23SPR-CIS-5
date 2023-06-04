/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on April 18, 2023, 10:28 AM
 * Purpose:Input Validation for Battleship game v1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes

//Execution Behind Here
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int choice; //User input
    
    //Initialize Inputs
    
    //Maps Inputs to Outputs - Process
        cout << "Enter number between 0-20" << endl;
        cin >> choice;
        while (choice < 0 || choice > 20) {
            cout << "Invalid Input" << endl;
            cout << "Enter number between 0-20" << endl;
            cin >> choice;
        }
    
    //Display output
        
    //Exit Stage Right
    return 0;
}

