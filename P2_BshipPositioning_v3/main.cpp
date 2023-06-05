/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on June 3, 2023, 9:35 AM
 * Purpose:Battleship Positioning v3
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes

//Execution Behind Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 8;//Size of array (0 to 7)
    int bShip[SIZE];   //8 Battleships (0,1,2,3,4,5,6,7) (1 for each column)
    int cnt=0;
   
    //Positioning Battleships - Y-Axis (1-9)
    for (int i=0;i<8;i++) { //For Loop to Randomize BattleShip positions
        bShip[i]=rand()%8+1; //Battleship set into a 1D line from 1-8
        cnt++;
    } //v3 got rid of Do Loop, as its not needed anymore with my how my grid should work
    //In v2, got rid of 'check' to see if they were overlapped.
    //Going to do parallel arrays to make a 8 x 8 grid X-Axis(A-H) Y-Axis(1-9)
    //At this point still unsure how to randomize variables through multiple arrays
    //Will only have 1 battleship in each column/array, with a randomized position
    
    //Display output
    cout << bShip[0] << endl;
    cout << bShip[1] << endl;
    cout << bShip[2] << endl;
    cout << bShip[3] << endl;
    cout << bShip[4] << endl;
    cout << bShip[5] << endl;
    cout << bShip[6] << endl;
    cout << bShip[7] << endl;
    
    //Exit Stage Right
    return 0;
}

