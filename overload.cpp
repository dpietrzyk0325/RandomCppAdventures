// maxInlineExercise.cpp 
#include <iostream>


double Max(double x, double y)
{
    return (x > y ? x : y);
}

int main()
{
    double testDouble1 = 0.0;
    double testDouble2 = 0.0;

    char testChar1 = 's';
    char testChar2 = 't';

    int testInt1 = -23;
    int testInt2 = 57;

    long testLong1 = 5.99;
    long testLong2 = -6;

    std::cout << "Please enter some two sets of numbers with decimals: \n";
    std::cin >> testDouble1;
    std::cin >> testDouble2;

    std::cout << "The greater value between " << testDouble1 << " and " << testDouble2 << " is: " << Max(testDouble1, testDouble2)
        << std::endl;

    std::cout << "The greater value between " << testChar1 << " and " << testChar2 << " is: " << Max(testChar1, testChar2)
        << std::endl;

    std::cout << "The greater value between " << testInt1 << " and " << testInt2 << " is: " << Max(testInt1, testInt2)
        << std::endl;

    std::cout << "The greater value between " << testLong1 << " and " << testLong2 << " is: " << Max(testLong1, testLong2)
        << std::endl;

    return 0;
}
