// driver.cpp

// CSCI1300 Spring 2023
// Author: Timothy Nemchuk 
// Recitation: 105 – Morgan Byers

#include "player.h"
#include "inventory.h"
#include <iostream>
#include <cassert>

int main(){
    //testing default constructor
    Player blank_player = Player();
    assert(blank_player.getFullness() == 50);
    assert(blank_player.getUsername() == "");

    //testing normal case for player
    Player player_1 = Player();
    player_1.setUsername("Player 1 name");
    player_1.setFullness(20);
    assert(player_1.getUsername() == "Player 1 name");
    assert(player_1.getFullness() == 20);

    //testing invalid case
    Player player_2 = Player();
    player_2.setUsername("");
    player_2.setFullness(80);
    assert(player_2.getUsername() != "Player 1 name");
    assert(player_2.getFullness() == 50);

    //testing inventory
    //testing default constructor
    Inventory blank_inventory = Inventory();
    assert(blank_inventory.getGold() == 100);
    assert(blank_inventory.getIngredients() == 0);
    assert(blank_inventory.getArmor() == 0);
    for (int i = 0; i < 3; i++) {
        assert(blank_inventory.getCookware(i) == 0);
    }
    for (int i = 0; i < 5; i++) {
        assert(blank_inventory.getWeapons(i) == 0);
    }
    for (int i = 0; i < 5; i++) {
        assert(blank_inventory.getTreasure(i) == 0);
    }

    //testing normal case for inventory
    Inventory inventory_1 = Inventory();
    inventory_1.setGold(20);
    inventory_1.setIngredients(20);
    inventory_1.setArmor(1);
    inventory_1.setCookware(0, 2);
    inventory_1.setWeapons(2, 1);
    inventory_1.setTreasure(4, 5);
    assert(inventory_1.getGold() == 20);
    assert(inventory_1.getIngredients() == 20);
    assert(inventory_1.getArmor() == 1);
    assert(inventory_1.getCookware(0) == 2);
    assert(inventory_1.getWeapons(2) == 1);
    assert(inventory_1.getTreasure(4) == 5);

    //testing invalid case
    Inventory inventory_2 = Inventory();
    inventory_2.setGold(-50);
    inventory_2.setIngredients(500);
    inventory_2.setArmor(-1);
    inventory_2.setCookware(2, 10);
    inventory_2.setWeapons(7, 3);
    inventory_2.setTreasure(3, -5);
    assert(inventory_2.getGold() == 0); //gold should not be allowed to go negative
    assert(inventory_2.getIngredients() == 100); //ingredients should be capped at 100
    assert(inventory_2.getArmor() == 0); //armor should not be allowed to go negative

    cout << endl << "!! SUCCESS !!" << endl << endl;
}