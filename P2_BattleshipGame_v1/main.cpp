/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on June 4, 2023, 4:30 AM
 * Purpose:Battleship Game - to be used as Function for final version
 */

//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes
void BShipPos(int[], const int);

//Execution Behind Here
int main(int argc, char** argv) {
   
    //Declare Variables
    const int SIZE=8;//Size of array (0 to 7)
    int hitCnt=0;
    int bShip[SIZE];
    
    char choice1;
    int choice2;
    
    //Calling Functions
    BShipPos(bShip, SIZE);
    
    //BattleShip Game
    do {
        cout << endl <<"Please select Column a - h" << endl;
        cout <<"Please select row 1 - 9" << endl << endl;
        cin >> choice1 >> choice2;
        if (choice1 == 'a') {
            if (choice2 == bShip[0]) {
                cout << endl << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'b') {
            if (choice2 == bShip[1]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'c') {
            if (choice2 == bShip[2]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'd') {
            if (choice2 == bShip[3]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'e') {
            if (choice2 == bShip[4]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'f') {
            if (choice2 == bShip[5]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'g') {
            if (choice2 == bShip[6]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'h') {
            if (choice2 == bShip[7]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Battleship Sunk = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else {
            cout << "Out of Range" << endl;
            cout << "Exiting Game" << endl;
            break;
        }
    } while (hitCnt<8);
    
    
    //Exit Stage Right
    return 0;
}

void BShipPos(int bShip[], const int SIZE) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
   
    //Positioning Battleships - Y-Axis (1-9)
    for (int i=0;i<8;i++) { //For Loop to Randomize BattleShip positions
        bShip[i]=rand()%8+1; //[1-9]
    }
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
    return;
}
