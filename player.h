// player.h

// CSCI1300 Spring 2023
// Author: Timothy Nemchuk 
// Recitation: 105 – Morgan Byers

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
    private:
        string username_;
        int fullness_;
    public:
        Player(); //default constructor

        string getUsername();
        void setUsername(string set_username);

        int getFullness();
        void setFullness(int set_fullness);
};

#endif //PLAYER_H