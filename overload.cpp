// maxInlineFunction.cpp
// Creator: David Pietrzyk
// Date: 09-05-2023 (MM-DD-YYYY)
// Last Update Date: 09-07-2023 (DD-MM-YYYY)

#include <iostream>

/*
    Function name: Max
    Author: David Pietrzyk
    Date: 09-05-2023 (MM-DD-YYYY)
    Use: To find the greater value
    Parameters: two double variable values (double x, double y)
    Return: Greater value between of the two
*/
double Max(double x, double y)
{    
    // function is able to implicitly convert to lower data types
    return (x > y ? x : y); 
}

/*
    Function name: Max [overload of Max(double x, double y)]
    Author: David Pietrzyk
    Date: 09-06-2023 (MM-DD-YYYY)
    Use: To find the greater value (char x, char y)
    Parameters: two char variable values
    Return: Greater value between of the two
*/
/*
double Max(char x, char y) // uncomment if trying to make function call ambiguous
{
    return (x > y ? x : y);
}
*/

/*
    Higher to lower data types (implicit conversion of types)
    If lower to higher no loss in data
    If higher to lower loss in data
    long double -> double -> float -> long -> int -> short -> char
*/

// main function (start of execution)
int main()
{
    double testDouble1 = 0.0;
    double testDouble2 = 0.0;

    char testChar1 = 'y';
    char testChar2 = 't';

    int testInt1 = -23;
    int testInt2 = 57;

    long testLong1 = 5.99;
    long testLong2 = -6;

    // doesn't work with char
    std::cout << "Please enter some two sets of numbers with decimals.\n";
    std::cout << "Enter first decimal number: ";
    std::cin >> testDouble1;
    std::cout << "Enter second decimal number: ";
    std::cin >> testDouble2;

    std::cout << "The greater value between " << testDouble1 << " and " << testDouble2 << " is: " << 
        Max(testDouble1, testDouble2) << std::endl;

    std::cout << "The greater value between " << testChar1 << " and " << testChar2 << " is: " << 
        Max(testChar1, testChar2) << std::endl;

    std::cout << "The greater value between " << testInt1 << " and " << testInt2 << " is: " 
        << Max(testInt1, testInt2) << std::endl; // error when Max(char x,char y) uncommented as ambiguous call

    std::cout << "The greater value between " << testLong1 << " and " << testLong2 << " is: " 
        << Max(testLong1, testLong2) << std::endl; // error when Max(char x,char y) uncommented as ambiguous call

    // We would need to make overloaded functions for all types used (double, char, int, long int).
    // Or leave out Max(char x, char y) and use implicit conversion.
    // Or we could make function template (best option).

    return 0;
}
