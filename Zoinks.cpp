#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <unistd.h>
#include "room.h"
#include "room.cpp"

using namespace std;
int main()
{
    // Declaring Variables

    string action = "";
    bool key = false;
    bool unlocked = false;
    bool open = false;
    bool entered = false;

    // Displaying the title

    cout << "Welcome to ";

    for(int i = 0; i < 3; i++)
    {
        cout.flush();
        sleep(1);
        cout << ". ";
    }

    cout.flush();
    sleep(1);

    displayTitle();

    cout.flush();
    sleep(3);

    //displaying instructions
    threeLineSpace();
    cout << "TO MOVE: " << endl << "Type \"Go North/South/East/West\"" << endl;
    cout << "TO LOOK: " << endl << "Type \"Look\" and which object to look at. Type just \"Look\" to display the room description again." << endl;
    cout << "TO GET OBJECTS: " << endl << "Type \"Get\" and what object you'd like to take." << endl;
    cout << "TO USE OBJECTS: " << endl << "Type \"Use\" and what object you'd like to use and what you would like to use it on." << endl;
    cout << "TO OPEN DOORS: " << endl << "Type \"Open Door\""<< endl;
    cout << "TO VIEW INVENTORY: " << endl << "Type \"Inventory\""<< endl;
    cout << "TO SEE THE INSTRUCTIONS AGAIN: " << endl << "Type \"Help\"" << endl << endl;
    cout << "Press enter to begin. . .";

    cin.get();

    threeLineSpace();

    // Game

    int roomIndex = 1;
    int prevRoom = roomIndex;
    bool complete = false;
    bool basementDoor = false;
    bool cageDoor = false;
    room location = currentRoom(roomIndex);
    inventory i;
    cout << location.getDescription() << endl;
    string userInput = "";

    while(!complete)
    {

        cout << "> ";
        getline(cin,userInput);
        interpret(roomIndex,userInput,i,complete,basementDoor,cageDoor);
        location = currentRoom(roomIndex);

        if(prevRoom != roomIndex)
        {
            threeLineSpace();
            roomTitle(roomIndex);
            cout << location.getDescription();
            threeLineSpace();
            prevRoom = roomIndex;
        }
    }
}
