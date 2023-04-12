// player.cpp

// CSCI1300 Spring 2023
// Author: Timothy Nemchuk 
// Recitation: 105 – Morgan Byers

#include "player.h"
#include <iostream>

Player::Player(){
    username_ = "";
    fullness_ = 50;
}

// username functions
string Player::getUsername(){
    return username_;
}
void Player::setUsername(string set_username){
    username_ = set_username;
}

//fullness functions
int Player::getFullness(){
    return fullness_;
}
void Player::setFullness(int set_fullness){
    if(set_fullness > 50){
        fullness_ = 50;
    } else {
        fullness_ = set_fullness;
    }
}