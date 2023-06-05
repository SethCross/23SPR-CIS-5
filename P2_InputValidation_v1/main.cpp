/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on June 3, 2023, 1:10 PM
 * Purpose:Input Validation 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes

//Execution Behind Here
int main(int argc, char** argv) {
    
    //Declare Variables
    char choice1;
    int choice2;
    
    //Initialize Inputs
    cout <<"Please select Column a - h" << endl;
    cin >> choice1;
    cout <<"Please select row 1 - 9" << endl;
    cin >> choice2;
    
    if (choice1 < 'a' || choice1 > 'h') {
        do {
            cout << "Invalid Column" << endl;
            cout <<"Please select row A - H" << endl;
            cin >> choice1;
        } while (choice1 < 'a' || choice1 > 'h');
    }
    if (choice2 < 1 || choice2 > 9) {
        do {
            cout << "Invalid Row" << endl;
            cout <<"Please select row A - H" << endl;
            cin >> choice1;
        } while (choice2 < 1 || choice2 > 9);
    } 
    //Exit Stage Right
    return 0;
}

