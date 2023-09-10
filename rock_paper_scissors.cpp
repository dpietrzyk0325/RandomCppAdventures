#include <iostream>

// Struct Player
struct Player
{
    // members
    std::string name; // used for the name of the player
    char selection; // used for setting a selection
};

// function prototypes

std::string getSelection(Player player);
void setSelection(Player &player, char selection);

/*  
    Author: Dawid Pietrzyk
    Date Created: 
    Input: Structure variable of type Player
    Output: The name member of the input structure variable of type Player  
*/
std::string getSelection(Player player){
    return player.name;
}

/*  
    Author: Dawid Pietrzyk
    Date Created: 
    Input: Structure variable of type Player, and character variable containing the selection
    Output: None (void) 
*/
void setSelection(Player &player, char selection){
    player.name = selection;
}

// main function
int main()
{
    srand(time(0)); // seed random number generator
    int randNum = (rand() % 3) + 1; 
    
    Player human; // make a structure variable of type Player for the human player
    Player computer; // make a structure variable of type player for the computer

    std::cout << "******************************************************\n";
    std::cout << "***************ROCK PAPER SCISSORS GAME***************\n";
    std::cout << "******************************************************\n";
    std::cout << "Please make a selection: \n";
    return 0;
}
