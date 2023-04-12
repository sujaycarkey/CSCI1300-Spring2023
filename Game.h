#ifndef GAME_H
#define GAME_H

#include "Inventory.h"
#include "Map.h"
#include "Player.h"
#include "Monster.h"
#include <iostream>
#include <vector>

using namespace std;

class Game
//Game contains the private and public parts of Game.cpp
{
    private:
        Map map;
        Inventory inventory;
        int rooms_cleared;
        int sorcerer_anger;
        int spaces_explored;
        int turns;
        vector<Player> group;
        vector<Monster> monsters;
        vector<Monster> monsters_defeated;

    public:
        Game();

        int getRoomsCleared();
        void setRoomsCleared(int new_rooms_cleared);

        int getSorcererAnger();
        void setSorcererAnger(int new_sorcerer_anger);

        int getSpacesExplored();
        void setSpacesExplored(int new_spaces_explored);

        int getTurns();
        void setTurns(int new_turns);

        Player getPlayerAt(int index);
        void setPlayerAt(int index, Player new_player);

        Monster getMonsterAt(int index);
        void setMonsterAt(int index, Monster new_monster);

        Monster getDefeatedMonsterAt(int index);
        void setDefeatedMonsterAt(int index, Monster defeated_monster);

        
        void initializeMap();
        void initializePlayers();
        void initializeMonsters();

        void merchantMenu();
        void statusUpdate();
        void mainMenu();
        void displayPartyStats();

        //bool move(Map map, Inventory inventory, char direction);
        bool investigate();
        bool combat();
        bool attack(Monster opponent, int monster_index);
        void surrender();
        void cook();

        void NPC();
        bool NPCpuzzle();
        bool doorPuzzle();
        
        void room();
        void openDoor();
        void giveUp();

        void misfortunes();

        void leaderboard(string main_character);

        void gameEnd();

};

#endif