#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

int main (){

    srand(time(0));
    int randNum = -1;
    int answer = -1;
    int guesses = 10;

    while (randNum < 0 || randNum > 100) {
        randNum = rand();
    }

    std::cout << "Guess a number between 0 to 100!\n";
    while (answer != randNum && guesses != 0){
        std::cout << "Take a guess! You have " << guesses << " guesses remaining! ";
        std::cin >> answer;
        guesses = guesses - 1;
        if (answer == randNum){
            std::cout << "\nCongrats! It was " << randNum << "! You got it in " << 10-guesses << " guesses!\n";
            std::cout << "Thanks for playing!\n";
            return 0;
        } else {
            std::cout << "No, that wasn't right. ";
            if (randNum < answer){
                std::cout << "Try a smaller number.\n";
            } else {
                std::cout << "Try a bigger number.\n";
            }
        }
    }
    std::cout << "You didn't get it in time! The number was " << randNum << "!\nBetter luck next time!\n";
    return 0;
}