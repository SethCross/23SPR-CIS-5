/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on April 18, 2023, 10:35 AM
 * Purpose:Input Validation for Battleship game v2
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
    unsigned int hitCnt;//Battleship Hit Counter, used for ending do-while loop after sinking all battleships
    
    int choice; //User input of Battleship Coordinates
    
    //Initialize Inputs
    hitCnt=0;//Start game with 0 sunk battleships
    
    //Maps Inputs to Outputs - Process
    do {   
        cout << "Enter number between 0-20" << endl;
        cin >> choice;
        while (choice < 0 || choice > 20) {
            cout << "Invalid Input" << endl;
            cout << "Enter number between 0-20" << endl;
            cin >> choice;
        }
        hitCnt++; //Adds a hit count if input is valid
    } while (hitCnt < 5); //There will only be 5 battleships in complete version of game
        
    //Display output
        
    //Exit Stage Right
    return 0;
}

