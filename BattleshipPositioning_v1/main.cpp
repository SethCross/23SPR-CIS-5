/*
 * File:   main.cpp
 * Author: Seth Cross
 * Created on April 2, 2023, 8:25 PM
 * Purpose:Battleship positioning program
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
                  bship5;//Battleship 5
    
    //Initialize Inputs
    
    //Randomizing Battleships positions
    bship1=rand()%21;//[0,20]
    bship2=rand()%21;//[0,20]
    bship3=rand()%21;//[0,20]
    bship4=rand()%21;//[0,20]
    bship5=rand()%21;//[0,20]
    
    //Making sure Battleships are not on top of each other
        
    if (bship1 == bship2 || bship1 == bship3 || bship1 == bship4 || bship1 == bship5){
        while (bship1 == bship2){
            bship2=rand()%21;
        }
        while (bship1 == bship3){
            bship3=rand()%21;
        }
        while (bship1 == bship4){
            bship4=rand()%21;
        }
        while (bship1 == bship5){
            bship5=rand()%21;
        }
    }
    else if (bship2 == bship1 || bship2 == bship3 || bship2 == bship4 || bship2 == bship5){
        while (bship2 == bship1) {
            bship1=rand()%21;
        }
        while (bship2 == bship3){
            bship3=rand()%21;
        }
        while (bship2 == bship4){
            bship4=rand()%21;
        }
        while (bship2 == bship5){
            bship5=rand()%21;
        }
    }  
    else if (bship3 == bship1 || bship3 == bship2 || bship3 == bship4 || bship3 == bship5) {
        while (bship3 == bship1) {
            bship1=rand()%21;
        }
        while (bship3 == bship2) {
            bship2=rand()%21;
        }
        while (bship3 == bship4){
            bship4=rand()%21;
        }
        while (bship3 == bship5){
            bship5=rand()%21;
        }
    }
    else if (bship4 == bship1 || bship4 == bship2 || bship4 == bship3 ||bship4 == bship5) {
        while (bship4 == bship1){
            bship1=rand()%21;
        }
        while (bship4 == bship2){
            bship2=rand()%21;
        }
        while (bship4 == bship3){
            bship3=rand()%21;
        }
        while (bship4 == bship5){
            bship5=rand()%21;
        }
    }

    
    //Maps Inputs to Outputs - Process
    
    //Intro to the Battleship game
    
    //Display output
    //Cout to show that battleships are not on top of each other
    cout << "Location of all battleships sunk" << endl; 
    cout << "bship1 = " << bship1 << endl;
    cout << "bship2 = " << bship2 << endl;
    cout << "bship3 = " << bship3 << endl;
    cout << "bship4 = " << bship4 << endl;
    cout << "bship5 = " << bship5 << endl;
    
    //Exit Stage Right
    return 0;
}

