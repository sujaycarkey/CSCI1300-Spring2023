#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster()
{
    name = "";
    challenge_rating = -1;
}

string Monster::getName()
{
    return name;
}
void Monster::setName(string new_name)
{
    name = new_name;
}

int Monster::getChallengeRating()
{
    return challenge_rating;
}
void Monster::setChallengeRating(int new_challenge_rating)
{
    challenge_rating = new_challenge_rating;
}