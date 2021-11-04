#include <iostream>

int main() {
    std::cout << "Your goal in this game is to guess 3 numbers...";
    std::cout << std::endl;
    std::cout << "You have 3 attempts to guess the correct sequence...";
    std::cout << std::endl;
    std::cout << "If you do not guess them correctly within those 3 tries, you die...";
    std::cout << std::endl;

    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 7;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product of those variables
    std::cout << "The numbers add up to: " << CodeSum << std::endl;
    std::cout << "The numbers multiplied together will equal: " << CodeProduct << std::endl;

    int PlayerGuess;
    std::cin >> PlayerGuess;
    std::cout << "You entered: " << PlayerGuess;

    return 0;
}