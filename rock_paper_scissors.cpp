#include <iostream>

// funtion prototypes
std::string getSelection(player player);
void setSelection(player &player, char selection);

struct player
{
    std::string name; // used for the name of the player
    char selection; // used for setting a selection
};

std::string getSelection(player player){
    return player.name;
};

void setSelection(player &player, char selection){
    player.name = selection;
}

int main()
{
    srand(time(0));
    int randNum = (rand() % 3) + 1;
    
    player human;
    player computer;

    return 0;
}
