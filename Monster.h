#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>

using namespace std;

class Monster
{
    private:
        string name;
        int challenge_rating;
    public:
        Monster();

        string getName();
        void setName(string new_name);

        int getChallengeRating();
        void setChallengeRating(int new_challenge_rating);
};

#endif