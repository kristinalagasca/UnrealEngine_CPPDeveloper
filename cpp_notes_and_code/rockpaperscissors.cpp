#include <iostream>
#include <ctime>
#include <list>

bool RockPaperScissors() {
    // Still need to add expression in this function

    return true;
}


int main() {
    std::cout << "Welcome to the game of Rock, Paper, Scissors!\n";
    
    const char *PlayerChoice[3] = {"rock", "paper", "scissor"};
    const char *ComputerChoice[3] = {"rock", "paper", "scissor"};

    char Choice;

    std::cout << "Please enter your choice [rock, paper, scissor]: ";
    std::cin >> Choice;

    int BestTwoOutOfThree = 3;
    int FirstTry = 1;

    while (FirstTry <= BestTwoOutOfThree) {
        bool LevelComplete = RockPaperScissors();
        std::cin.clear();   //Clears errors
        std::cin.ignore();  //Discards buffer

        if (LevelComplete) {
            std::cout << "CONGRATS! YOU WIN!!! WOOOOOO";
        } else {
            std::cout << "Sorry, bud. You lose this round :( \n";
            std::cout << "Play Again? [Y/N]";
        }
    }
    return 0;
}