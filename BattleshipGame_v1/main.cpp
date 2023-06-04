/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on April 18, 2023, 10:48 AM
 * Purpose:Battleship game v1
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Functions
#include <ctime>   //Time to set the random seed
using namespace std;

//User Libraries

//Global Constants  Math/Physics/Chemistry/Conversions ONLY

//Function Prototypes

//Execution Behind Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int  bship1,//Battleship 1
                  bship2,//Battleship 2
                  bship3,//Battleship 3
                  bship4,//Battleship 4
                  bship5,//Battleship 5
                  hitCnt;//Battleship Hit Counter
    int choice; //User Input for "Missile Strike"
    
    //Initialize Inputs
    hitCnt=0; //Start the game with 0 hit battleships, used to stop game after sinking all ships
    
    //Randomizing Battleships positions
    //Making sure Battleships are not on top of each other
    do {
        bship1=rand()%21;//[0,20]
        bship2=rand()%21;//[0,20]
        bship3=rand()%21;//[0,20]
        bship4=rand()%21;//[0,20]
        bship5=rand()%21;//[0,20]
    } while (bship1 == bship2 || bship1 == bship3 || bship1 == bship4 || bship1 == bship5
            || bship2 == bship3 || bship2 == bship4 || bship2 == bship5
            || bship3 == bship4 || bship3 == bship5
            ||bship4 == bship5);
    
    //Maps Inputs to Outputs - Process
    
    //Intro to the Battleship game
    cout << "                 Battleship Game" << endl << endl;
    cout << "Sink all 5 enemy battleships with Missile Strikes to win!" << endl;
    
    do {
        //User input of "Missile Strike" coordinates
        cout << endl << "Input coordinates between 0 and 20 for Missile Strike." << endl << endl;
        cin >> choice;
        while (choice < 0 || choice > 20){ //Input Validation
            cout << endl << "Invalid Coordinates." << endl;
            cout << "Input coordinates between 0 and 20 for Missile Strike." << endl << endl;
            cin >> choice;
        }
        
        //If input = battleship coordinates, The Battleship will get "hit" and "sink"
        if (choice == bship1){
            hitCnt++;//+1 to hit counter
            cout << endl << "HIT! Enemy Battleship Destroyed!" << endl;
            cout << "You have sunk " << hitCnt << " Battleships!" << endl <<endl;
        }
        
        else if (choice == bship2) {
            hitCnt++;//+1 to hit counter
            cout << endl << "HIT! Enemy Battleship Destroyed!" << endl;
            cout << "You have sunk " << hitCnt << " Battleships!" << endl <<endl;
        }
        
        else if (choice == bship3){
            hitCnt++;//+1 to hit counter
            cout << endl << "HIT! Enemy Battleship Destroyed!" << endl;
            cout << "You have sunk " << hitCnt << " Battleships!" << endl <<endl;
        }
        
        else if (choice == bship4){
            hitCnt++;//+1 to hit counter
            cout << endl << "HIT! Enemy Battleship Destroyed!" << endl;
            cout << "You have sunk " << hitCnt << " Battleships!" << endl <<endl;
        }
        
        else if (choice == bship5) {
            hitCnt++;//+1 to hit counter
            cout << endl << "HIT! Enemy Battleship Destroyed!" << endl;
            cout << "You have sunk " << hitCnt << " Battleships!" << endl <<endl;
        }
        else if (choice != bship1 || choice != bship2 || choice != bship3 || choice != bship4 || choice != bship5) {
            cout << endl << "Miss!" << endl;
        }
    } while (hitCnt < 5); //Only 5 Battleships total to sink
    
    //Display output
    //User won the game statement
    cout << endl << "Congratulations, You have sunk all enemy Battleships" << endl;
    
    //Exit Stage Right
    return 0;
}

