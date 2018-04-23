#ifndef room_H
#define room_H

using namespace std;

class room
{
    public:
        room();
        room(string d,int i);
        room(string d, string i1,int i);
        room(string d,string i1, string i2,int i);
        void setRoom(string d, string i1, string i2, int i);
        string getDescription();
        string getItem1();
        string getItem2();
        int getIndex();

    private:
        string description;
        string item1;
        string item2;
        int index; // Index is used to keep track of what room
                   // the user is currently in. Used in interface
};

#endif
