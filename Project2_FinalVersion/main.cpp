/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on June 4, 2023. 8:40 PM
 * Purpose: Project 2 (Battleship Game) 
 */

//System Libraries
#include <iostream>//Input/Output Output
#include <cstdlib> //Random Functions
#include <ctime>   //Time Library
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes
void BShipGame(); //Hit/Miss Function
void BShipPos(int[], const int);//Battleship Positioning Randomizer
void BShipChk(int[], const int);//Function to check BShip locations

//Execution Behind Here
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char choice; //User choice to play or not
    
    //Asks user if they would like to play
    cout << "Battleship Game" << endl;
    cout << "Type y to play, press anything else to exit" << endl;
    cin >> choice;
    //Originally had designed a Do-Loop to allow users to rerun the game after winning
    //but found it turned to an infinite loop when variables were given
    //out of range inputs. Switched it just to ask to start the game once.
    switch(choice) {
        case 'y' : {
            cout << endl;
            BShipGame();
            cout << endl;
        }
        case 'Y' : {
            cout << endl;
            BShipGame();
            cout << endl;
        }
        default: break; 
    }   
    
    //Exit Stage Right
    return 0;
}

void BShipGame() {
    
    //Declare Variables
    const int SIZE=10;//Size of array (0 to 9)
    int hitCnt=0;//BShip Hit Counter, used to end game after sinking all BShips
    int bShip[SIZE];//Array for BShip Variables
    
    char choice1,//A-J
        chkBshp;
    int choice2; //1-15
    
    //Calling Functions
    BShipPos(bShip, SIZE);
    
    //BattleShip Game
    //In this version, added value+1, to simulate BShips having varying lengths
    do {
        cout << endl <<"Please select Column a - j" << endl;
        cout <<"Please select row 1 - 15" << endl << endl;
        cin >> choice1 >> choice2;
        if (choice2 < 1 || choice2 > 15) {
            do {
                cout << "Invalid input" << endl;
                cout <<"Please select Column a - j" << endl;
                cout <<"Please select row 1 - 15" << endl << endl;
                cin >> choice1 >> choice2;
            } while (choice2 < 1 || choice2 > 15);
        }
        if (choice1 == 'a'||choice1 == 'A') {
            if (choice2 == bShip[0]) {
                cout << endl << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[0]+1) { 
                cout << endl << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'b'||choice1 == 'B') {
            if (choice2 == bShip[1]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'c'||choice1 == 'C') {
            if (choice2 == bShip[2]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[3]+1) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[3]+2) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'd'||choice1 == 'D') {
            if (choice2 == bShip[3]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'e'||choice1 == 'E') {
            if (choice2 == bShip[4]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[4]+1) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[4]+2) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[4]+3) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'f'||choice1 == 'F') {
            if (choice2 == bShip[5]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'g'||choice1 == 'G') {
            if (choice2 == bShip[6]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[6]+1) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[6]+2) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[6]+3) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'h'||choice1 == 'H') {
            if (choice2 == bShip[7]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else if (choice2 == bShip[7]+1) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'i'||choice1 == 'I') {
            if (choice2 == bShip[8]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
            }
            else {
            cout << endl << "MISS" << endl;
            }
        }
        else if (choice1 == 'j'||choice1 == 'J') {
            if (choice2 == bShip[9]) {
                cout << "HIT!" << endl;
                hitCnt++;
                cout << "Successful Missile Strikes = " << hitCnt << endl;
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
    } while (hitCnt<20);
    
    //Display Output
    cout << "Congratulations, You Sunk all enemy battleships" << endl;
    
    //Battleship Location Check (optional)
    cout << "Press y to see the Battleship's Locations" << endl;
    cout << "Anything else ends game" << endl;
    cin >> chkBshp;
    if (chkBshp == 'y' || chkBshp == 'Y') {
        BShipChk(bShip, SIZE);
    }
    
    //Exit Stage Right
    return;
}

void BShipPos(int bShip[], const int SIZE) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
   
    //Positioning Battleships - Y-Axis
    for (int i=0;i<10;i++) { //For Loop to Randomize BattleShip positions
        bShip[i]=rand()%10+1; //[1-11]
    }

    //Exit Stage Right
    return;
}

void BShipChk(int bShip[], const int SIZE) {
    
    //Display output - Check to make sure BShips are getting hit when input correctly
    cout << "Bship 1 = A" << bShip[0] << "-A" << bShip[0]+1 << endl;
    cout << "Bship 2 = B" << bShip[1] << endl;
    cout << "Bship 3 = C" << bShip[2] << "-C" << bShip[2]+2 << endl;
    cout << "Bship 4 = D" << bShip[3] << endl;
    cout << "Bship 5 = E" << bShip[4] << "-E" << bShip[4]+3 << endl;
    cout << "Bship 6 = F" << bShip[5] << endl;
    cout << "Bship 7 = G" << bShip[6] << "-G" << bShip[6]+3 << endl;
    cout << "Bship 8 = H" << bShip[7] << endl;
    cout << "Bship 9 = G" << bShip[7] << endl;
    cout << "Bship 10= H" << bShip[8] << "-H" << bShip[8]+1 << endl;
    cout << "Bship 11= I" << bShip[9] << endl;
    cout << "Bship 12= J" << bShip[10] << endl;
    
    //Exit Stage Right
    return;
}