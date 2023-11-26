#include <iostream>

// TODO: finish this program some day in the future (probably never) :D

// Struct Player

// this should probably be a class instead of a struct
struct Player
{
    // members
    std::string name; // used for the name of the player
    char selection; // used for setting a selection

    // did you know that you can have a constructor for a struct? :D
    // thank you you C++

    // constructor
    Player()
    {
        name = "Player";
        selection = ' ';
    }
};

// function prototypes

std::string getSelection(Player player);
void setSelection(Player &player, char selection);

/*  
    Author: Dawid Pietrzyk
    Date Created: September 10 2023 (DD-MM-YYYY)
    Input: Structure variable of type Player
    Output: The name member of the input structure variable of type Player  
*/
std::string getSelection(Player player){
    return player.name;
}

/*  
    Author: Dawid Pietrzyk
    Date Created: September 10 2023 (DD-MM-YYYY)
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
