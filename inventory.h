// inventory.h

// CSCI1300 Spring 2023
// Author: Timothy Nemchuk 
// Recitation: 105 – Morgan Byers

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
using namespace std;

class Inventory {
    private:
        int gold_;
        int ingredients_;
        int armor_;

        const int num_cookware = 3;
        int cookware_[3]; //there are 3 types of cookware

        const int num_weapons = 5;
        int weapons_[5]; //there are 5 types of weapons
                
        const int num_treasure = 5;
        int treasure_[5]; //there are 5 types of treasure
    
    public:
        Inventory(); //default constructor
        //parametrized constructor is not needed 

        //gold
        int getGold();
        void setGold(int set_gold);

        //ingredients
        int getIngredients();
        void setIngredients(int set_ingredients);

        //armor
        int getArmor();
        void setArmor(int set_armor);

        //cookware
        int getCookware(int index);
        void setCookware(int index, int set_cookware);

        //weapons
        int getWeapons(int index);
        void setWeapons(int index, int set_weapons);

        //treasure
        int getTreasure(int index);
        void setTreasure(int index, int set_treasure);

        //prints the inventory
        void printInventory();
};


#endif //INVENTORY_H