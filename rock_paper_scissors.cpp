/* This program will demonstrate a game of Scissors, Paper, Lizard, Spock. */

#include <iostream>
#include <stdlib.h>

int main() {

  // The game of games
   srand(time(NULL));
   int computer = rand() % 3 + 1;
   int user = 0;

    std::cout << "====================\n";
    std::cout << "ROCK PAPER SCISSORS!\n";
    std::cout << "++++++++++++++++++++\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    //std::cout << "4)  Lizard\n";
    //std::cout << "5) Spock\n";

    std::cout << "shoot!\n";
    std:: cin >> user;

    if(user == 1)
        std::cout << "You choose: Rock\n";
    else if(user == 2)
        std::cout << "You choose: Paper\n";
    else if(user == 3)    
        std::cout << "You choose: Scissors\n";
    else
        std::cout << "Invalid input!\n";

    if(computer == 1)
        std::cout << "The Machine picked: Rock\n";
    else if(computer == 2)
        std::cout << "The Machine picked: Paper\n";
    else if(computer == 3)
        std::cout << "The Machine picked: Scissors\n";
    else
        std::cout << "The Machine is on the fritz!\n";

    if(user == computer) 
        std::cout << "It's a Tie!\n";
    else if(user == 1 && computer == 2)
        std::cout << "Computer wins with Paper\n";
    else if(user == 1 && computer == 3)
        std::cout << "User wins with Rock\n";
    else if(user == 2 && computer == 1)
        std::cout << "User withs with Paper\n";
    else if(user == 2 && computer == 3)
        std::cout << "Computer wins with Scissors";
    else if(user == 3 && computer== 1)
        std::cout << "Computer wins with Rock\n";
    else if(user == 3 && computer == 2)
        std::cout << "User wins with Scissors\n"
  
}