#include <iostream>
#include <string>
#include <vector>

#include "room.h"
#include "inventory.h"
#include "inventory.cpp"
#include "MobyDick.cpp"

using namespace std;


room::room()
{
    description = "error";
    item1 = "";
    item2 = "";
    index = -1;
}

room::room(string d, int i) // Unused items should be declared ""
{
    description = d;
    item1 = "";
    item2 = "";
    index = i;
}

room::room(string d, string i1, int i)
{
    description = d;
    item1 = i1;
    item2 = "";
    index = i;
}

room::room(string d, string i1, string i2, int i)
{
    description = d;
    item1 = i1;
    item2 = i2;
    index = i;
}

void room::setRoom(string d, string i1, string i2, int i)
{
    description = d;
    item1 = i1;
    item2 = i2;
    index = i;
}

string room::getDescription() // Called when typing 'look'
{
    return description;
}

string room::getItem1()
{
    return item1;
}

string room::getItem2()
{
    return item2;
}

int room::getIndex()
{
    return index;
}

// Declaring Rooms

// Coolsville

string coolsvilleDescription = "You stare mystery and adventure in the face, and you decide It's too much for you as you walk away from the mansion. The investigator is still lost, and at night before you go to bed"
    "you sometimes feel like you did the wrong thing. You soon shake it off however, and make yourself a pastrami and ketchup sandwich to eat away the guilt.\n You \"win\"!";
int coolsvilleIndex = 0;
room coolsville(coolsvilleDescription,coolsvilleIndex);

// Front of Mansion

string mansionFrontDescription = "Before you stands the mansion where the investigator was last seen. You are standing on an "
    "old dusty welcome mat at the front door of the mansion. A small window can be seen to the left of the door along with a"
    "bold sign reading \"KEEP OUT\" hung over the door. To the North is the inside of the mansion. To the East is the East side of the mansion, To the West is the West side of the mansion.";
int mansionFrontIndex = 1;
room mansionFront(mansionFrontDescription,mansionFrontIndex);

// East side of Mansion

string mansionEastDescription = "The east side of the mansion doesn't seem to have anything particularly interesting going on."
    "There is a small basement window near the base of the house, but otherwise there doesn't seem to be anything else. To the North is the North side of the mansion. To the West is the front door."; // Can see inspector through window
int mansionEastIndex = 2;
room mansionEast(mansionEastDescription,mansionEastIndex);

// West side of Mansion

string mansionWestDescription = "The west side of the mansion doesn't seem to have anything particularly interesting going on. To the North is the North side of the mansion. To the East is the front of the mansion.";
int mansionWestIndex = 3;
room mansionWest(mansionWestDescription,mansionWestIndex);

// north side of Mansion

string mansionNorthDescription = "The north side of the mansion has a small patio and a flower bed filled with dead tulips and weeds."
    "it seems like whoever inhabits this place doesn't want the award for \"Coolest lawn in Coolsville\". To the East and West are those respective sides of the Mansion.";
int mansionSouthIndex = 4;
room mansionNorth(mansionNorthDescription,mansionSouthIndex);

// Lobby

string lobbyDescription = "The lobby is a nice open area in the mansion. There is a vintage carpet beneath your feet "
    "that covers most of the creaky wooden floors. It appears to be exotic (and expensive). A painting "
    "is on the north side of the wall depicting a renaissance man of stature. To the north, there is the Dining Hall."
    "To the East is the Kitchen. To the West, there is the study, which appears to have a sliver of light shining in from the window.";
int lobbyIndex = 5;
room lobby(lobbyDescription,lobbyIndex);

// Dining Hall

string diningHallDescription = "The dining hall is a tall and expansive room. The walls are covered in dark red draperies and paintings "
    "with beautiful gold trims. The windows on the north side of the dining hall are boarded up. In the room, there is a large table in the middle"
    " of the room and, to your surprise, no chairs. There is a candelabra on the table and some plates. To the South is the lobby. To the East is a hallway"; // On one of the plates is a piece of bread
int diningHallIndex = 6;
room diningHall(diningHallDescription,"slice of bread","candelabra",diningHallIndex);

// Study

string studyDescription = "The study is a warm room filled with blue and purple hues. The walls have a purple wallpaper with a flowers and vines embroidered on it."
    "There is one window on the south wall with some boards on it, yet it is not completely sealed with some of the moonlight being let through into the room."
    "There is a comfortable leather couch on the west side. There is a desk on the south side with a book on top of it."
    "To the South, there seems to be a door with a lock on it. To the West is the lobby.";
int studyIndex = 7;
room study(studyDescription,"basement key",studyIndex);

// Kitchen

string kitchenDescription = "The kitchen seems to be a normal sized one. The tiling on the floor is checkerboard black and white. There are ovens and sinks "
    "and kitchen supplies spewed about. It seems as though someone created a mess in here hastily. There is a block on the counter with knives being held in it."
    "There is a fridge in the north-east corner of the room. To the east, there is a pantry. To the north, there is a hallway. To the west, there is the lobby.";
int kitchenIndex = 8;
room kitchen(kitchenDescription,"salami","milk",kitchenIndex);

// Pantry

string pantryDescription = "In a small door there is the pantry. The pantry has the same flooring as the kitchen and has a dusty atmosphere. There are layers upon "
    "layers of 50 pound bags in the corner of the room all containing flour. Like, who needs this much flower man? "
    "There also seems to be a cast iron lever on part of the floor as well.";
int pantryIndex = 9;
room pantry(pantryDescription,"bread",pantryIndex);

// Hallway

    string hallwayDescription = "This hallway is a long corridor that leads to the dining hall to the north and has a side door to a bedroom "
"on the east wall. To the south, there is the kitchen. There is a painting at the north end of the hallway.";
int hallwayIndex = 10;
room hallway(hallwayDescription,hallwayIndex);

// Bedroom

string bedroomDescription = "The bedroom has a red carpet over the rickety old floors and contains a blocked off window on the east wall. "
    "There is a bed in the corner as well as a nightstand. To the west is the hallway";
int bedroomIndex = 11;
room bedroom(bedroomDescription,"lava lamp",bedroomIndex);

// Basement

string basementDescription = "It's a dark and musty basement. The walls and floor are covered with stone bricks of uneven size and placement. "
    "The floors are somewhat wet and there are wood supports on the ceiling. To the West is a strange looking room. To the east is the archives. "
    "To the north is a lab. To the south is the stairway back upstairs";
int basementIndex = 12;
room basement(basementDescription,basementIndex);

// Archives

string archivesDescription = "This room contains the archived books of the mansion. These archives are very large and span "
    "all across this medium sized room. Part of the archives looks to be sloppily placed together, unlike the rest of the books in the room."
    "To the west is the main floor of the basement.";
int archivesIndex = 13;
room archives(archivesDescription,archivesIndex);

// Lab

string labDescription = "This lab seems to be a lab for a chemist, a strange addition to a mansion. There are test tubes, multiple measurement devices,"
    " and bunsen burners strayed without this room. The cabinets in the room seem to be able to open and are dark with rotting wood. All the supplies seem to be state of the art and new."
    " To the south is the main floor of the basement";
int labIndex = 14;
room lab(labDescription,"small key",labIndex);

// Dungeon

string dungeonDescription = "This...room seems to share a lot of similarities to a prison or dungeon with chains, handcuffs, ankle bracelets all hung up"
    "along the walls of the room. In in the far back corner, you can see what seems to be a scraggly man in tattered clothes curled up against the "
    "back wall of a cage. To your east is the main floor of the basement.";
int dungeonIndex = 15;
room dungeon(dungeonDescription,dungeonIndex);

room currentRoom(int r)
{
    switch(r)
    {
        case 0:
            return coolsville;
            break;
        case 1:
            return mansionFront;
            break;

        case 2:
            return mansionEast;
            break;
        case 3:
            return mansionWest;
            break;
        case 4:
            return mansionNorth;
            break;
        case 5:
            return lobby;
            break;
        case 6:
            return diningHall;
            break;
        case 7:
            return study;
            break;
        case 8:
            return kitchen;
            break;
        case 9:
            return pantry;
            break;
        case 10:
            return hallway;
            break;
        case 11:
            return bedroom;
            break;
        case 12:
            return basement;
            break;
        case 13:
            return archives;
            break;
        case 14:
            return lab;
            break;
        case 15:
            return dungeon;
            break;
        default: cout << "ERROR" << endl;
            break;
    }
}

void roomTitle(int r)
{
    switch(r)
    {
        case 0:
            break;
        case 1:
            cout << "O----------------------------------------------O" << endl;
            cout << "          Front of the Mansion" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;

        case 2:
            cout << "O----------------------------------------------O" << endl;
            cout << "         East Side of the Mansion" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 3:
            cout << "O----------------------------------------------O" << endl;
            cout << "         West Side of the Mansion" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 4:
            cout << "O----------------------------------------------O" << endl;
            cout << "         North Side of the Mansion" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 5:
            cout << "O----------------------------------------------O" << endl;
            cout << "                    Lobby" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 6:
            cout << "O----------------------------------------------O" << endl;
            cout << "                 Dining Hall" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 7:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Study" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 8:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Kitchen" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 9:
            cout << "O----------------------------------------------O" << endl;
            cout << "                    Pantry" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 10:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Hallway" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 11:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Bedroom" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 12:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Basement" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 13:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Archives" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 14:
            cout << "O----------------------------------------------O" << endl;
            cout << "                     Lab" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 15:
            cout << "O----------------------------------------------O" << endl;
            cout << "                   Dungeon" << endl;
            cout << "O----------------------------------------------O" << endl;
            break;
        case 16:
            cout << "O----------------------------------------------O" << endl;
            cout << "               Instructions" << endl;
            cout << "O----------------------------------------------O" << endl;
    }
}

void displayTitle()
{
    cout << endl;
    cout << "         ,----," << endl;
    cout << "       .'   .`|                                   ,-." << endl;
    cout << "    .'   .'   ;          ,--,                 ,--/ /|" << endl;
    cout << "  ,---, '    .' ,---.  ,--.'|         ,---, ,--. :/ |" << endl;
    cout << "  |   :     ./ '   ,'\\ |  |,      ,-+-. /  |:  : ' /" << endl;
    cout << "  ;   | .'  / /   /   |`--'_     ,--.'|'   ||  '  /" << endl;
    cout << "  `---' /  ; .   ; ,. :,' ,'|   |   |  ,\"' |'  |  :" << endl;
    cout << "    /  ;  /  '   | |: :'  | |   |   | /  | ||  |   \\" << endl;
    cout << "   ;  /  /--,'   | .; :|  | :   |   | |  | |'  : |. \\" << endl;
    cout << "  /  /  / .`||   :    |'  : |__ |   | |  |/ |  | ' \\ \\" << endl;
    cout << "./__;       : \\   \\  / |  | '.'||   | |--'  '  : |--'" << endl;
    cout << "|   :     .'   `----'  ;  :    ;|   |/      ;  |,'" << endl;
    cout << ";   |  .'              |  ,   / '---'       '--'" << endl;
    cout << "`---'                   ---`-'" << endl;
    cout << endl;
}

void threeLineSpace()
{
    for(int i = 0; i < 3; i++)
        cout << endl;
}

void interpret(int& roomIndex,string input, inventory& inv, bool& c, bool& basementDoor, bool& cageDoor)
{
    // Convert input to lowercase

    for(int i = 0; i < input.length(); i++)
        input[i] = tolower(input[i]);



    // Finding what the user has input

    /* Hierarchy of priority
    * Go
    * Look
    * Use
    * Get / Take
    * eat
    * drink
    */

    // Finding the action word user entered

    string action;

    if(input.find("go") != -1)
        action = "go";
    else if(input.find("look") != -1)
        action = "look";
    else if(input.find("use") != -1)
        action = "use";
    else if(input.find("get") != -1 || input.find("take") != -1)
        action = "get";
    else if(input.find("open") != -1)
        action = "open";
    else if((input.find("inventory") != -1))
        action = "inventory";
    else if((input.find("help") != -1))
        action = "help";
    else if((input.find("make") != -1))
        action = "make";
    else if((input.find("drink") != -1))
        action = "drink";
    else if((input.find("eat") != -1))
        action = "eat";
    else
        action = "INVALID";
    // Finding direction input (if go is action)

    if(action == "go")
    {
        string direction;

        if(input.find("north") != -1)
            direction = "north";
        else if(input.find("south") != -1)
            direction = "south";
        else if(input.find("east") != -1)
            direction = "east";
        else if(input.find("west") != -1)
            direction = "west";


        // Determining which room to take the user

            /*
                Room Index Guide
                * 1 = Front of Mansion
                * 2 = East of Mansion
                * 3 = West of Mansion
                * 4 = South of Mansion
                * 5 = Lobby
                * 6 = Dining Hall
                * 7 = Study
                * 8 = Kitchen
                * 9 = Pantry
                * 10 = Hallway
                * 11 = Kitchen
                * 12 = Basement
                * 13 = Archives
                * 14 = Lab
                * 15 = Dungeon
            */

        switch(roomIndex)
        {
            case 1: if(direction == "north"){

                roomIndex = 5;
                }
                else if(direction == "south"){
                    roomIndex = 0;
                    c = true;
                }
                else if(direction == "east")
                    roomIndex = 2;
                else if(direction == "west")
                    roomIndex = 3;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 2: if(direction == "north")
                roomIndex = 4;
                else if(direction == "south")
                    roomIndex = 1;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 3: if(direction == "north")
                roomIndex = 4;
                else if(direction == "south")
                    roomIndex = 1;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 4: if(direction == "east")
                roomIndex = 2;
                else if(direction == "west")
                    roomIndex = 3;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 5: if(direction == "north")
                    roomIndex = 6;
                else if(direction == "south")
                    roomIndex = 1;
                else if(direction == "east")
                    roomIndex = 8;
                else if(direction == "west")
                    roomIndex = 7;
                break;

            case 6: if(direction == "south")
                    roomIndex = 5;
                else if(direction == "east")
                    roomIndex = 10;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 7: if(direction == "east")
                        roomIndex = 5;
                else if(direction == "south" && basementDoor){
                roomIndex = 12;
                }
                else if(direction == "south" && !basementDoor){
                    cout << "Like the door is locked man!" << endl;
                }
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 8: if(direction == "north")
                        roomIndex = 10;
                else if(direction == "east")
                    roomIndex = 9;
                if(direction == "west")
                    roomIndex = 5;
                break;

            case 9: if(direction == "west")
                        roomIndex = 8;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 10: if(direction == "north")
                        roomIndex = 6;
                else if(direction == "south")
                    roomIndex = 8;
                else if(direction == "east")
                    roomIndex = 11;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 11: if(direction == "west")
                        roomIndex = 10;
                    else
                        cout << "\"Like, I can't go that way man\"" << endl;
                    break;

            case 12: if(direction == "north")
                    roomIndex = 14;
                else if(direction == "south")
                    roomIndex = 7;
                else if(direction == "east")
                    roomIndex = 13;
                else if(direction == "west")
                    roomIndex = 15;
                break;

            case 13: if(direction == "west")
                        roomIndex = 12;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 14: if(direction == "south")
                        roomIndex = 12;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            case 15: if(direction == "east")
                        roomIndex = 12;
                else
                    cout << "\"Like, I can't go that way man\"" << endl;
                break;

            default: cout << "THIS IS AN ERROR" << endl;
                break;
        }
    }

    // Finding what user looks at

    if(action == "look"){

        switch(roomIndex){

            case 1:
                if(input.find("mat") != -1)
                    cout << "The welcome mat is old and brown, showing very obvious signs of age and neglect" << endl;
                else if(input.find("window") != -1)
                    cout << "Peering through the small window, you can make out a small room filled with books upon books upon books." << endl;
                else if(input.find("sign") != -1)
                    cout << "The sign says in bright bold letters \"KEEP OUT\". Looking around, you don't see a guard dog or anything "
                        "that seems dangerous, so you decide It'd be best to not heed the warning" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                    cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 2:
                if(input.find("window") != -1)
                    cout << "You peer through the small window to see a damp, dark room with a cage in the corner."
                        "upon closer examination you can see a human-ish figure curled up inside the cage. Perhaps It's the missing investigator!"
                        "\"Zoinks man! I better get in there quick and try and save him!!\"" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 3:
                if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 4:
                if(input.find("patio") != -1)
                    cout << "the patio has accumulated what seems like years of muck and grime on It's now deteriorated "
                        "tiling.";
                if(input.find("flower") != -1 || input.find("tulip") != -1 || input.find("bed") != -1 || input.find("weed") != -1)
                    cout << "This flower bed must've been neglected for years..or at least a couple months. There's no saving those poor "
                        "tulips though..." << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 5:
                if(input.find("carpet") != -1)
                    cout << "You lift up the carpet. The underside of the carpet is damp and yellowing with age."
                        "A musty smell hits you in the face." << endl;
                else if(input.find("painting") != -1)
                    cout << "Upon closer examination of the painting, you notice It seems to be an image of "
                        "a young couple on their wedding day. You wonder if one of these two people in the picture "
                        "has anything to do with the inspector's disappearance." << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 6:
                if(input.find("drape") != -1)
                    cout << "The drapes seems pointless to be hung now that all the windows are boarded up..." << endl;
                else if(input.find("painting") != -1)
                    cout << "All the painting in this room are luxurious images of...sandwiches? The funny part is, "
                        "despite the confusion you feel as to why there are pictures, you wonder if there are things "
                        "around here that you could use to make a sandwich..." << endl;
                else if(input.find("window") != -1)
                    cout << "Yep, those boards are on their tight; the peculiar part is that you didn't see any boarded "
                        "windows on the outside of the house." << endl;
                else if(input.find("table") != -1){
                    if(!inv.includes("bread") && !inv.includes("candelabra"))
                        cout << "An elegantly arranged table with assorted plates placed where chairs would be if there were any..."
                            "A unlit candelabra sits in the center of it all. As well, on one of the plates you see a seemingly untouched "
                            "piece of bread" << endl;
                    else if(!inv.includes("candelabra") && inv.includes("bread") /* Only bread has been taken */)
                        cout << "An elegantly arranged table with assorted plates placed where chairs would be if there were any..."
                            "A unlit candelabra sits in the center of it all." << endl;
                    else if(inv.includes("candelabra") && !inv.includes("bread")/* Only candelabra has been taken */)
                        cout << "An elegantly arranged table with assorted plates placed where chairs would be if there were any..."
                            "You notice on one of the plates you see a seemingly untouched piece of bread" << endl;
                    else // Both bread and candelabra have been taken
                        cout << "An elegantly arranged table with assorted plates placed where chairs would be if there were any..." << endl;
                }
                else if(input.find("plate") != -1)
                    cout << "\"Wow It's a plate, that's pretty groovy I guess\"" << endl;
                else if(input.find("bread") != -1){
                    if(!inv.includes("bread")/* Bread has not been taken */)
                        cout << "The bread, surprisingly, looks fresh. Maybe one day old." << endl;
                }
                else if(input.find("candelabra") != -1){
                    if(!inv.includes("candelabra")/* Candelabra has not been taken */)
                        cout << "The candelabra is made of elegant silvers and gold and seems to be worth some value."
                            "There are three candles that have some wick left in them." << endl;
                }
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 7:
                if(input.find("cellar") != -1 || input.find("door") != -1){
                    if(basementDoor == false /*cellar Door is not unlocked Will need to use the USE function to complete this*/)
                        cout << "The cellar door has a small lock hung around the two main handles on the doors."
                            "\"Like, looks like I'll need a key to get down there man\"" << endl;
                    else if(basementDoor == true){ // Cellar Door is unlocked
                        cout << "The cellar door is no longer locked. \"I can like, go downstairs now. Groovy!\"" << endl;
                    }
                }
                else if(input.find("window") != -1)
                    cout << "Peering through the window, you can see the outside world..or at least the front porch of the mansion" << endl;
                else if(input.find("couch") != -1){
                    if(!inv.includes("mayo")/* Mayo has not been taken */)
                        cout << "This couch is a nice and dusty leather couch. There seems to be a bump in the right side" << endl;
                    else // If mayo has been taken
                        cout << "This couch is a nice and dusty leather couch." << endl;
                }
                else if(input.find("bump") != -1){
                    if(!inv.includes("mayo")/* Mayo has not been taken */)
                        cout << "Looking at the bump more closely, you notice that the bump is being caused by a sealed "
                            "jar of mayo hidden meticulously under one of the cushions. Huh. Cool." << endl;
                    else
                        cout << "\"Like, I don't know what to look at\"" << endl;
                }
                else if(input.find("mayo") != -1){
                    if(!inv.includes("mayo")/* Mayo has not been taken */)
                        cout << "A perfectly sealed jar of mayo. \"This would go great on a sandwich man\"" << endl;
                    else
                        cout << "\"Like, I don't know what to look at\"" << endl;
                }
                else if(input.find("desk") != -1)
                    cout << "On the desk sits the book \"Moby Dick\", an American classic. You also notice that the desk"
                        "has a drawer near its base." << endl;
                else if(input.find("drawer") != -1){
                    if(!inv.includes("basement key")/*Key has not been taken */)
                        cout << "Opening the drawer, you find alongside a variety of pointless trinkets and papers, a small key" << endl;
                    else // Key has been taken
                        cout << "Opening the drawer, you find a variety of pointless trinkets and papers" << endl;
                }
                else if(input.find("key") != -1){
                    if(!inv.includes("basement key")/*Key has not been taken */)
                        cout << "The key has written on it in small letters \"basement\"" << endl;
                    else
                        cout << "\"Like, I don't know what to look at\"" << endl;
                }
                else if(input.find("book") != -1 || input.find("moby") != -1 || input.find("dick") != -1){
                    cout << "\"Ah, nothing like a good book man...and a classic one at that!\"" << endl;
                    MobyDick whale;
                    whale.callBook();
                }
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\"Like, I don't know what to look at\"" << endl;
                break;

            case 8:
                if(input.find("oven") != -1 || input.find("sink") != -1)
                    cout << "\"Man, if only like, Scoob was here. We could make a piping hot-a pizza pie!\"" << endl;
                else if(input.find("block") != -1 || input.find("knives") != -1)
                    cout << "The knives stored in the small block look particularly sharp. It'd be best to not mess with them" << endl;
                else if(input.find("fridge") != -1){
                    if(!inv.includes("salami") && !inv.includes("ketchup") && !inv.includes("milk")/* Neither salami, ketchup, or milk have been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is salami, ketchup, and milk, all of which seem to be fresh and edible." << endl;
                    else if(!inv.includes("salami") && !inv.includes("milk")/* Neither salami or milk have been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is salami and milk, all of which seem to be fresh and edible." << endl;
                    else if(!inv.includes("salami") && !inv.includes("ketchup")/* Neither salami or ketchup have been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is salami and ketchup, all of which seem to be fresh and edible." << endl;
                    else if(!inv.includes("ketchup") && !inv.includes("milk")/* Neither Ketchup, or milk have been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is ketchup and milk, all of which seem to be fresh and edible." << endl;
                    else if(!inv.includes("salami")/* Only salami hasn't been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is salami which seems to be fresh and edible." << endl;
                    else if(!inv.includes("salami")/* Only ketchup hasn't been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there is ketchup, which seems to be fresh and edible." << endl;
                    else if(!inv.includes("milk")/* Only milk hasn't been taken */)
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "Inside there milk, which seems to be fresh and edible." << endl;
                    else/* Everything has been taken */
                        cout << "A nuclear-era fridge which does not fit the renaissance theme of the rest of the mansion."
                            "There doesn't seem to be anything left inside." << endl;
                }
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 9:
                if(input.find("sack") != -1 || input.find("flour") != -1){
                    if(!inv.includes("bread")/* Bread has not been taken */)
                        cout << "\"This sure is a lot of flour\" On one of the sacks, is a single piece of bread "
                        "....suspiciously." << endl;
                    else // Bread has been taken
                        cout << "\"This sure is a lot of flour\"" << endl;
                }
                else if(input.find("trap") != -1 || input.find("door") != -1)
                    cout << "It's an iron clad trapped door. The lever next to it opens the hatch, but the horrors "
                        "that lie under..." << endl;
                else if(input.find("lever") != -1)
                    cout << "With curiosity getting the best of you, you pull the lever and the iron trap swings open."
                        "As you peer your head down the hatch you hear the voice of a young Caucasian that sounds fairly familiar."
                        "The words he says to you however causes you to quickly close the hatch in a cold sweat.\n\n\n"
                        "\"Hey gang, let's split up and look for clues!\"" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 10:
                if(input.find("painting") != -1)
                    cout << "This painting looks exactly like one that would be in minecraft. Spooky!" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 11:
                if(input.find("window") != -1)
                    cout << "\"Like, why are all these windows boarded up man?\"" << endl;
                else if(input.find("bed") != -1)
                    cout << "While the bed has been untouched for quite some time, it still looks comfy"
                        "enough to sleep in." << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 12:
                if(input.find("supports") != -1)
                    cout << "while the supports seem a bit shaky, they seem sturdy enough that the mansion "
                        "won't collapse on you and end your life" << endl;
                else if(input.find("floor") != -1)
                    cout << "Wow. A floor" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 13:
                if(input.find("book") != -1)
                    cout << "The books have accumulated so much dust on then that it's difficult to tell "
                        "them apart from giant piles of dust that have simply piled onto each other" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 14:
                if(input.find("test") != -1 || input.find("tube") != -1 || input.find("device") != -1 || input.find("bunsen") != -1 || input.find("burner") != -1)
                    cout << "\"Like, none of this stuff really means anything to me man\"" << endl;
                else if(input.find("cabinet") != -1){
                    if(!inv.includes("cage key")/* Cage Key has not been taken */)
                        cout << "Opening the cabinet, the only thing that seems of value is the small key hanging on a hook "
                            "on the inside of the cabinet door" << endl;
                    else
                        cout << "There doesn't seem to be anything of value in here" << endl;
                }
                else if(input.find("key") != -1){
                    if(!inv.includes("cage key")/* Cage key has not been taken */)
                        cout << "The small key is rusted and looks fairly basic. \"Like, I wonder what it goes to.\"" << endl;
                    else
                        cout << "\"Like, I don't know what to look at\"" << endl;
                }
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            case 15:
                if(input.find("chain") != -1 || input.find("rope") != -1 || input.find("handcuff") != -1)
                    cout << "\"Man, I bet someone people would get a kick outta this place!\"" << endl;
                else if(input.find("man") != -1 || input.find("cage") != -1 || input.find("figure") != -1)
                    cout << "Looking at the cage closer and seeing the figure more clearly, you can confirm that this is "
                        "in fact the missing investigator! He seems to be unconscious, or at least unresponsive."
                        "\"Like, I'd better get him out lickity split man!\"" << endl;
                else if(input == action)
                    cout << (currentRoom(roomIndex)).getDescription() << endl;
                else
                   cout << "\" Like, I don't know what to look at\"" << endl;
                break;

            default:
                cout << "WHY DO YOU SEE THIS. THIS IS AN ERROR" << endl;
                break;
        }
    }

    // Finding item used (if item is used)

    if(action == "use"){
        switch(roomIndex){
            case 7:
                if(input.find("key") != -1)
                {
                    if(inv.includes("basement key"))
                    {
                        cout<< "You insert the key into the door. It seems to be a perfect fit!" << endl <<" You can now go into the basement." << endl;
                        basementDoor = true;
                        inv.removeItem("basement key",inv);
                    }
                    else
                    cout << "\"Like, you don't have the Basement Key!\"" << endl;
                }
                else
                cout << "\"Like, I don't understand what to use!\"" << endl;
            break;
            case 15:
                if(input.find("key") != -1)
                {
                    if(inv.includes("cage key"))
                    {
                        cout<< "You insert the key into the cage. It's now unlocked!" << endl;
                        cageDoor = true;
                        inv.removeItem("cage key",inv);
                    }
                    else
                    cout << "\"Like, you don't have the Basement Key!\"" << endl;
                }
                else
                cout << "\"Like, I don't understand what to use!\"" << endl;
            break;
            default:
                cout << "\"Like, I don't understand what to use!\"" << endl;
            break;
        }
    }
    if (action == "open"){
        switch(roomIndex){
            case 7:
                if(input.find("cellar") != -1 || input.find("door") != -1){
                    if(basementDoor == false /*cellar Door is not unlocked*/ )
                        cout << "\"Like, looks like I'll need to use a key to get down there man\"" << endl;
                    else if(basementDoor == true){ // Cellar Door is unlocked
                        roomIndex = 12;
                    }
                }
                else if(input.find("drawer") != -1){
                    if(!inv.includes("basement key")/*Key has not been taken */)
                        cout << "Opening the drawer, you find alongside a variety of pointless trinkets and papers, a small key" << endl;
                    else // Key has been taken
                        cout << "Opening the drawer, you find a variety of pointless trinkets and papers" << endl;
                }
                break;
            case 15:
                if(input.find("cage") != -1 || input.find("door") != -1){
                    if(cageDoor == false /*cellar Door is not unlocked*/ )
                        cout << "\"Like, looks like I'll need to use a key to get down there man\"" << endl;
                    else if(cageDoor == true){ // Cellar Door is unlocked
                        //inspector is saved, game won
                        cout << "You have freed the inspector!" << endl;
                        cout << "You carry him out of the mansion and deliver him to the nearest medical facility. A couple of days later, a newspaper has an interview with the inspector in it."
                         << "He praised you for your bravery and for saving his life." << endl;
                        cout << "Thanks for playing!" << endl;
                        c = true;
                    }
                }
                else if(input.find("drawer") != -1){
                    if(!inv.includes("basement key")/*Key has not been taken */)
                        cout << "Opening the drawer, you find alongside a variety of pointless trinkets and papers, a small key" << endl;
                    else // Key has been taken
                        cout << "Opening the drawer, you find a variety of pointless trinkets and papers" << endl;
                }
                break;
                default:
                    cout << "\"Like, I can't open that, man.\"" << endl;
                    break;
        }
    }
    // Finding item taken (if item is taken)
    if(action == "get"){
        switch(roomIndex){ // Add others as necessary
            case 6:// bread and candelabra
                if(input.find("bread") != -1)
                    inv.addItem("top bun",inv);
                else if(input.find("candelabra") != -1)
                    inv.addItem("candelabra",inv);
                else
                    cout << "\" Like, I can't get that man\"" << endl;
                break;

            case 7: // basement key
                if(input.find("key") != -1) //made it one word for simplicity, user will see that it is basment when they pick up
                    inv.addItem("basement key",inv);
                else if(input.find("mayo") != -1)
                    inv.addItem("mayo",inv);
                else
                    cout << "\"Like, I can't get that man\"" << endl;
                break;

            case 8: // salami and milk
                if(input.find("salami") != -1)
                    inv.addItem("salami",inv);
                else if(input.find("milk") != -1)
                    inv.addItem("milk",inv);
                else if(input.find("ketchup") != -1)
                    inv.addItem("ketchup",inv);
                else
                    cout << "\"Like, I can't get that man\"" << endl;
                break;

            case 9:// lava lamp
                if(input.find("bread") != -1)
                    inv.addItem("bottom bun",inv);
                else
                    cout << "\"Like, I can't get that man\"" << endl;
                break; // bread

            case 14:
                if(input.find("key") != -1)
                    inv.addItem("cage key",inv);
                else
                    cout << "\"Like, I can't get that man\"" << endl;
                break;

            default:
                cout << "\"Like, I can't get that man\"" << endl;
                break;
        }
    }
    //user types make
    if(action == "make")
    {
        if(input.find("sandwich") != -1 && inv.includes("salami") && inv.includes("top bun") && inv.includes("bottom bun") && inv.includes("mayo")){
            cout << "Using your 17 years of sandwich knowledge, you swiftly and elegantly combine the salami \nbetween the two buns, and slather on a heaping wad of mayo." << endl;
            inv.addItem("sandwich",inv);
            inv.removeItem("salami",inv);
            inv.removeItem("top bun",inv);
            inv.removeItem("bottom bun",inv);
            inv.removeItem("mayo",inv);
        }
        else if(input.find("sandwich") != -1){
            cout << "You do not have the necessary components to make a sandwich" << endl;
            cout << "Things required to make a sandwich: salami, top bun, bottom bun, mayo" << endl;
        }
        else
            cout << "\"Like, I don't know what I'm supposed to make man.\"" << endl;
    }

    // User types eat

    if(action == "eat"){
        if(input.find("sandwich") != -1 && inv.includes("sandwich")){
            cout << "In one very awkward movement, you eat the sandwich in one gulp with no chewing or anything...do not ask any questions." << endl;
            inv.removeItem("sandwich",inv);
        }
        else if((input.find("salami") != -1 && inv.includes("salami")) || (input.find("top bun") != -1 && inv.includes("top bun")) || (input.find("bottom bun") != -1 && inv.includes("bottom bun")) || input.find("mayo") != -1 && inv.includes("mayo"))
            cout << "\"Like, I COULD eat this, but I'd prefer to make it into a sandwich!\"" << endl;
        else
            cout << "\"Like, I don't want to eat that man.\"" << endl;

    }

    // User types drink

    if(action == "drink"){
        if(input.find("milk") != -1 && inv.includes("milk")){
            cout << "You joyously guzzle down the cool milk. After you are finished, you have a big smile on your face." << endl;
            inv.removeItem("milk",inv);
        }
        else if(input.find("ketchup") != 1 &&inv.includes("ketchup")){
            cout << "\"Like, I haven't done this since elementary school. Good times man, good times\"" << endl;
            inv.removeItem("ketchup",inv);
        }
        else
            cout << "\"Like, I don't want to drink that man.\"" << endl;
    }
    // User types Inventory

    if(action == "inventory")
    {
        inv.dispInventory();
    }

    //User types help

    if(action == "help")
    {
        roomTitle(16);
        threeLineSpace();
        cout << "TO MOVE: " << endl << "Type \"Go North/South/East/West\"" << endl;
        cout << "TO LOOK: " << endl << "Type \"Look\" and which object to look at. Type just \"Look\" to display the room description again." << endl;
        cout << "TO GET OBJECTS: " << endl << "Type \"Get\" and what object you'd like to take." << endl;
        cout << "TO USE OBJECTS: " << endl << "Type \"Use\" and what object you'd like to use and what you would like to use it on." << endl;
        cout << "TO OPEN DOORS: " << endl << "Type \"Open Door\""<< endl;
        cout << "TO VIEW INVENTORY: " << endl << "Type \"Inventory\""<< endl;
        cout << "TO SEE THE INSTRUCTIONS AGAIN: " << endl << "Type \"Help\"" << endl;
    }

    else if(action == "INVALID")
    {
        cout << "Like, I don't understand \"" << input << "\" man." << endl;
    }

}
