// Object Orinted Programming KKramer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Code by Kelley Kramer
//CSC275

//define what libraries and resoucres are needed
#include <iostream>
#include "Ship.h"
#include "USship.h"
#include "Unknown.h"
#include <ctime>
#include <cstdlib>
using namespace std;

//random number generator and test to get a value of 1 or 0
int determineAttacker()
{
    int test = rand() % 10;
    return (test >= 6) ? 1 : 0;
}

void playGame()
{
    //Simple intro title and text to tell user what the program is
    cout << "\n\n\t\t ** Navy Simulation ** \n\n"
        "This is a simulation of a battle between a US Navy Destroyer and an unknow enemy vessel.\n"
        "The battle will take place over a random period of time, resulting in either ship being destroyed.\n"
        "In this simulation no user imputs will be required.\n" << endl;

    //name us ship
    USship destroyer("USS Janeway");
    //define hull type for US Ship
    destroyer.setHull("Strong");

    //name unknow ship
    Unknown battle("KIS Kang");
    //define hull for unknow ship
    battle.setHull("Weak");

    //introducing the US ship and its stats
    cout << "The US Ship is called the " << destroyer.getName() << ".\n"
        "The ship's health is currently at " << destroyer.getHealth() << "!\n"
        "Its attach strength is " << destroyer.fire() << "!\n" << endl;

    //introducing the unknow ship and its stats
    cout << "THe unknow ship has an identifier of " << battle.getName() << ".\n"
        "This ships health is at " << battle.getHealth() << "!\n"
        "The ship has an attack strength of " << battle.fire() << "!\n" << endl;

    //defines the counter for the loops to kill
    int simulation = 1;

    while (true)
    {
        //show the numbers of loops to kill and opponent
        cout << "Simulation " << simulation << ", run program.\n" << endl;
        
        //determins the attacker and the reciver randomly using the value of determineAttacker random number
        if (determineAttacker())
        {
            cout << destroyer.getName() << " Is firering on enemy vessel!" << endl;
            battle.takeDamage(destroyer.fire());
            
        }
        else
        {
            cout << battle.getName() << " Is firering on "<<destroyer.getName()<<"!" << endl;
            destroyer.takeDamage(battle.fire());            
        }

        //determins when a players hull strength is at zero
        if (destroyer.getHealth()<= 0)
        {
            cout << destroyer.getName() << " has suffered a hull breach and is dead." << endl;
            break;
        }
        if (battle.getHealth() <= 0)
        {
            cout << battle.getName() << " has suffered a hull breach and is dead." << endl;
            break;
        }
        cout << battle.getName() << "'s hull is now at " << battle.getHealth() << "!" << endl;
        cout << destroyer.getName() << " 's hull is now at " << destroyer.getHealth() << "!\n" << endl;

        //update the simulation number
        simulation++;
    }
}

//defdine perameters before main game loop
int main()
{
    //declar char
    char char_in;

    //tack computer time to and plug into srand
    srand(time(0));

    //main loop of the game
    while (true)
    {
        //runs all of the dialog and character introductions at the beginnign of each loop from method playGame
        playGame();

        //Provides dialog for the escape from the loop and offers a key to press.
        cout << "Would you like to run the simulation again?\n" << "Press Y for Yes"<< endl;
        //defines press y for yes, all other keys are no and will exit
        cin >> char_in;
        if (char_in != 'y')
        {
            cout << "Thack you for watching the simulation." << endl;
            break;
        }
    }
}

