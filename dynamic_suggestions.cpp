// dynamic_suggestions.cpp
// Creator: Dawid Pietrzyk
// Date: 08-24-2023 (DD-MM-YYYY)

/*
    This program asks the user for the number of suggestions and then asks the user for the suggestions.
    After that, it prints all the suggestions.
    This program uses dynamic memory allocation to allocate memory for the suggestions.
*/

#include <iostream> // this thing is needed for input and output (incase you didn't already know) :P
#include <string> // include this if you get error: namespace "std" has no member "getline"

// start of the program execution
int main()
{
    std::string * suggestions; // create a pointer to a string object
    int number; // number of suggestions

    std::cout << "Enter the amount of suggestions: "; // ask the user for the number of suggestions
    std::cin >> number; // read the number of suggestions

    if (number <= 0) // if the number of suggestions is less than or equal to 0
    {
        std::cout << "Wrong value for the number of suggestions!" << std::endl; // print an error message
        return -1;
    }

    suggestions = new std::string[number]; // allocate memory for the suggestions 

    // iterate through the number of suggestions
    for (int index = 0; index < number; index++)
    {
        std::cout << "Enter a suggestion: "; // ask the user for a suggestion
        std::getline(std::cin >> std::ws, suggestions[index]); // std::ws is used to ignore the whitespace character 
    }

    // iterate and print all the suggestions
    std::cout << "Here are all the suggestions: \n";
    for (int index = 0; index < number; index++)
    {
        std::cout << "Suggestion #" << index + 1 << ": " << suggestions[index] << std::endl;
    }
    
    delete[] suggestions; // free the memory allocated for the suggestions
    
    return 0;
}
