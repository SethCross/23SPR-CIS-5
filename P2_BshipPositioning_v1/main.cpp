/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on June 3, 2023, 8:20 AM
 * Purpose:Battleship Positioning (Using For, Array, and Do Loop) 
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
    const int SIZE = 5;//Size of array (0 to 5)
    int bShip[SIZE];   //6 Battleships (0,1,2,3,4,5)
    
    //Positioning Battleships
    do { //Do Loop to re run program if battleships are overlapping
        for (int i=0;i<5;i++) { //For Loop to Randomize BattleShip positions
            bShip[i]=rand()%8+1; //Battleship set into a 1D line from 1-8
        }
    } while (bShip[0]==bShip[1]||bShip[0]==bShip[2]||bShip[0]==bShip[3]||bShip[0]==bShip[4]||bShip[0]==bShip[5]
            ||bShip[1]==bShip[2]||bShip[1]==bShip[3]||bShip[1]==bShip[4]||bShip[1]==bShip[5]
            ||bShip[2]==bShip[3]||bShip[2]==bShip[4]||bShip[2]==bShip[5]
            ||bShip[3]==bShip[4]||bShip[3]==bShip[5]||bShip[4]==bShip[5]);
    
    //Display output
    cout << bShip[0] << endl;
    cout << bShip[1] << endl;
    cout << bShip[2] << endl;
    cout << bShip[3] << endl;
    cout << bShip[4] << endl;
    cout << bShip[5] << endl;
    
    //Exit Stage Right
    return 0;
}

