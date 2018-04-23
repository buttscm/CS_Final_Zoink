#include <iostream>
#include <vector>
#include "inventory.h"

using namespace std;

inventory::inventory()
{
    //default inventory start (change weed brownies probably)
    items.resize(1);
}

bool inventory::includes(string s){
    //tests if the item is in inventory
    bool t = false;
    for (int i = 0; i < items.size(); ++i)
    {
        if(items.at(i) == s)
        t = true;
    }
    return t;
}

void inventory::removeItem(string s, inventory p){
    //removes item from inventory
    //error when removing item that doesnt exist
    if(p.includes(s)){
        int i = 0;
        while (items.at(i) != s && i < items.size())
        ++i;
        items.erase(items.begin()+i);
    }
        else
        cout << "Like, you don't have this item, man. " << endl;
}

void inventory::dispInventory(){
    cout << "Like, you're holding: " << endl;
    for (int i = 0; i < items.size(); ++i)
    {
        cout << items.at(i) << endl;
    }
}

void inventory::addItem(string s, inventory i){
    if(!i.includes(s)){
    cout<< s << " added to inventory." << endl;
    items.push_back(s);
    }
    else
    cout << "Like, you already have that man!" << endl;
}
