#include <iostream>

int main() {
    int randomnum = rand() % 100;

    std::cout<<"Welcome to the game, please guess the number: ";

    int tries = 1;
    int guess = 0;

    while (guess != randomnum) {
        std::cout << "Guess!"<<std::endl;
        std::cin>>guess;

        if (guess < randomnum) {
            std::cout<<"Sorry, The guessed number is too low, please try again"<<std::endl;
        }
        else if (guess > randomnum) {
            std::cout<<"Sorry, The guessed number is too high, please try again"<<std::endl;
        }

        tries++;

    }

    if (tries < 10) {
        std::cout << "Great Work"<<std::endl;
    }
    else if (tries > 30) {
        std::cout << "That took you a long time"<<std::endl;
    }

    std::cout<<"You took "<<tries<<"attempts to guess the number"<<std::endl;

    return 0;

}