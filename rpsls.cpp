// A basic C++ program for play the game "Rock, Paper, Scissors, Lizard, Spock"


#include <iostream>
#include <stdlib.h>
#include <ctime>

int getUserChoice();
int getComputerChoice();
bool determineWinner(int, int);
void displayChoice(int);
void showMenu();

const int ROCK = 1, PAPER = 2, SCISSORS = 3, LIZARD = 4, SPOCK = 5;

int main() {
    int userGuess;
    int compGuess;

    userGuess = getUserChoice();
    compGuess = getComputerChoice();
    displayChoice(compGuess);
    determineWinner(userGuess, compGuess);

    system("pause");
    return 0;
}

int getUserChoice() {
    int choice;
    showMenu();
    std::cin >> choice;
    while ((choice < 1) || (choice > 5)) {
        std::cout << "Must choose 1-5!\n";
        std::cout << "Your guess: ";
        std::cin >> choice;
    }
    return choice;
}

int getComputerChoice() {
    unsigned seed = time(0);
    srand(seed);
    int choice = (rand() % (5)) + 1;
    return choice;
}

bool determineWinner(int user, int comp) {
    bool winner;
    while (user == comp) {
        winner = false;
        user = getUserChoice();
        comp = getComputerChoice();
        displayChoice(comp);
    }
    if (user != comp) {
        winner = true;
        // winning user scenarios
        if((user == SCISSORS) && (comp == PAPER)) {
            std::cout << "Scissors cut Paper. User Wins!\n";
        }
        if((user == SCISSORS) && (comp == LIZARD)) {
            std::cout << "Scissors stab Lizard. User Wins!\n";
        }
        if((user == PAPER) && (comp == SPOCK)) {
            std::cout << "Paper disproves Spock. User Wins!\n";
        }
        if((user == PAPER) && (comp == ROCK)) {
            std::cout << "Paper covers Rock. User Wins!\n";
        }
        if((user == ROCK) && (comp == LIZARD)) {
            std::cout << "Rock smooshes Lizard. User Wins!\n";
        }
        if((user == ROCK) && (comp == SCISSORS)) {
            std::cout << "Rock breaks Scissors. User Wins!\n";
        }
        if((user == LIZARD) && (comp == PAPER)) {
            std::cout << "Lizard eats Paper. User Wins!\n";
        }
        if((user == LIZARD) && (comp == SPOCK)) {
            std::cout << "Lizard posions Spock. User Wins!\n";
        }
        if((user == SPOCK) && (comp == SCISSORS)) {
            std::cout << "Spock bends Scissors. User Wins!\n";
        }
        if((user == SPOCK) && (comp == ROCK)) {
            std::cout << "Spock atomizes Rock. User Wins!\n";
        }
        // losing user outcomes
        if((user == SCISSORS) && (comp == ROCK)) {
            std::cout << "Scissors crushed by Rock. Computer Wins!\n";
        }
        if((user == SCISSORS) && (comp == SPOCK)) {
            std::cout << "Scissors bent by Spock. Computer Wins!\n";
        }
        if((user == PAPER) && (comp == SCISSORS)) {
            std::cout << "Paper cut by Scissors. Computer Wins!\n";
        }
        if((user == PAPER) && (comp == LIZARD)) {
            std::cout << "Paper eaten by Lizard. Computer Wins!\n";
        }
        if((user == ROCK) && (comp == PAPER)) {
            std::cout << "Rock covered by Paper. Computer Wins!\n";
        }
        if((user == ROCK) && (comp == SPOCK)) {
            std::cout << "Rock atomized by Spock. Computer Wins!\n";
        }
        if((user == LIZARD) && (comp == ROCK)) {
            std::cout << "Lizard smooshed by Rock. Computer Wins!\n";
        }
        if((user == LIZARD) && (comp == SCISSORS)) {
            std::cout << "Lizard stabbed by Scissors. Computer Wins!\n";
        }
        if((user == SPOCK) && (comp == PAPER)) {
            std::cout << "Spock disporived by Paper. Computer Wins!\n";
        }
        if((user == SPOCK) && (comp == LIZARD)) {
            std::cout << "Spock posioned by Lizard. Computer Wins!\n";
        }
    }
    return winner;
}

void displayChoice(int compChoice) {

    std::cout << "Computer guess: " << compChoice << "\n";
}

void showMenu() {

    std::cout << "1 - Rock\n";
    std::cout << "2 - Paper\n";
    std::cout << "3 - Scissors\n";
    std::cout << "4 - Lizard\n";
    std::cout << "5 - Spock\n";
    std::cout << "Your guess: ";
}



