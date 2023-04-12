// inventory.cpp

// CSCI1300 Spring 2023
// Author: Timothy Nemchuk 
// Recitation: 105 – Morgan Byers	

#include "inventory.h"
#include <iostream>

//Sets inventory to default values
Inventory::Inventory(){
    gold_ = 100;
    ingredients_ = 0;
    armor_ = 0;

    for (int i=0; i<num_cookware; i++){
        cookware_[i] = 0;
    }


    for (int i=0; i<num_weapons; i++){
        weapons_[i] = 0;
    }


    for (int i=0; i<num_treasure; i++){
        treasure_[i] = 0;
    }
}


// Gold getter and setter functions
int Inventory::getGold(){
    return gold_;
}
void Inventory::setGold(int set_gold){
    if (set_gold < 0) {
        gold_ = 0;
    } else {
        gold_ = set_gold;
    }
}

// Ingredients setter and getter functions
int Inventory::getIngredients(){
    return ingredients_;
}
void Inventory::setIngredients(int set_ingredients){
    if (set_ingredients < 0) {
        ingredients_ = 0;
    } else if (set_ingredients > 100) {
        ingredients_ = 100;
    } else {
        ingredients_ = set_ingredients;
    }
}

// Armor setter and getter functions
int Inventory::getArmor(){
    return armor_;
}
void Inventory::setArmor(int set_armor){
    if (set_armor < 0) {
        armor_ = 0;
    } else {
        armor_ = set_armor;
    }
}

//Setter and getter for cookware
int Inventory::getCookware(int index){
    return cookware_[index];
}
void Inventory::setCookware(int index, int set_cookware){
    cookware_[index] = set_cookware;
}

//Setter and getter for weapons
int Inventory::getWeapons(int index){
    return weapons_[index];
}
void Inventory::setWeapons(int index, int set_weapons){
    weapons_[index] = set_weapons;
}

//Setter and getter for treasure
int Inventory::getTreasure(int index){
    return treasure_[index];
}
void Inventory::setTreasure(int index, int set_treasure){
    treasure_[index] = set_treasure;
}

void Inventory::printInventory(){
    /* Outputs the following, * refers to a value
    +-------------+
    | INVENTORY   |
    +-------------+
    | Gold        | *
    | Ingredients | * kg
    | Cookware    | P: * | F: * | C: *
    | Weapons     | C: * | S: * | R: * | B: * | L: *
    | Armor       | *
    | Treasures   | R: * | N: * | B: * | C: * | G: *
    */
 
cout <<
"+-------------+" << endl <<
"| INVENTORY   |" << endl <<
"+-------------+" << endl <<
"| Gold        | " << getGold() << endl <<
"| Ingredients | " << getIngredients() << " kg" << endl <<
"| Cookware    | P: " << getCookware(0) << 
             " | F: " << getCookware(1) << 
             " | C: " << getCookware(2) << endl << 

"| Weapons     | C: " << getWeapons(0) << 
             " | S: " << getWeapons(1) << 
             " | R: " << getWeapons(2) << 
             " | B: " << getWeapons(3) << 
             " | L: " << getWeapons(4) << endl <<

"| Armor       | " << getArmor() << endl <<

"| Treasures   | R: " << getTreasure(0) <<  
             " | N: " << getTreasure(1) << 
             " | B: " << getTreasure(2) << 
             " | C: " << getTreasure(3) << 
             " | G: " << getTreasure(4) << endl;
}