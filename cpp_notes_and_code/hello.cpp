#include <iostream>

/*
The code below is an example of bad naming convention when it comes to Unreal Engine's coding standards
*/


int main() {
    std::cout << "Your goal in this game is to guess 3 numbers...";
    std::cout << std::endl;
    std::cout << "You have 3 attempts to guess the correct sequence...";
    std::cout << std::endl;
    std::cout << "If you do not guess them correctly within those 3 tries, you die...";
    std::cout << std::endl;

    // Declare 3 variables and assign to integers
    int a = 4;
    int b = 6;
    int c = 7;

    int sum = a + b + c;
    int product = a * b * c;

    // Print sum and product of those variables
    std::cout << "The numbers add up to: " << sum << std::endl;
    std::cout << "The numbers multiplied together will equal: " << product << std::endl;

    return 0;
}