#ifndef INVENTORY_H
#define INVENTORY_H

using namespace std;

class inventory
{
    public:
    inventory();
    bool includes(string s);
    void addItem(string s, inventory i);
    void removeItem(string s, inventory p);
    void dispInventory();
    
    private:
    vector<string> items; 
};

#endif