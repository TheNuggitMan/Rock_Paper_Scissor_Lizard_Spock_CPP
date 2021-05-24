#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));
  int comp = rand() % 3 + 1;
  int user = 0;

  cout << "=======================================\n";
  cout << "   Rock Paper Scissors Lizard Spock!   \n";
  cout << "=======================================\n";

  cout << "1) Rock\n";
  cout << "2) Paper\n";
  cout << "3) Scissors\n";
  cout << "4) Lizard\n";
  cout << "5) Spock\n";
  cout << "\n";
  cout << "Choose\n";

  cin >> user;
  //Rock
  if (user == 1 && comp == 2) {
    cout << "Computer wins with 2! Paper Covers Rock...\n";
  } else if (user == 1 && comp == 3) {
    cout << "User Wins! Rock Breaks Scissors..\n";
  } else if (user == 1 && comp == 4) {
    cout << "User Wins! Rock Crushes Lizard..\n";
  } else if (user == 1 && comp == 5) {
    cout << "Computer Wins with 5! Spock Vaporizes Rock..\n";
  }
  //Paper
  else if (user == 2 && comp == 1) {
    cout << "User Wins! Paper Covers Rock\n";
  } else if (user == 2 && comp == 3) {
    cout << "Computer Wins with 3! Scissors Cut Paper..\n";
  } else if (user == 2 && comp == 4) {
    cout << "Computer Wins with 4! Lizard Eats Paper..\n";
  } else if (user == 2 && comp == 5) {
    cout << "User Wins! Paper Disproves Spock..\n";
  }
  //Scissors
  else if (user == 3 && comp == 1) {
    cout << "Computer Wins with 1! Rock Breaks Scissors..\n";
  } else if (user == 3 && comp == 2) {
    cout << "User Wins! Scissors Cut Paper..\n";
  } else if (user == 3 && comp == 4) {
    cout << "User Wins! Scissors Decapitate Lizard..\n";
  } else if (user == 3 && comp == 5) {
    cout << "Computer Wins with 5! Spock Smashes Scissors..\n";
  }
  //Lizard
  else if (user == 4 && comp == 1) {
    cout << "Computer Wins with 1! Rock Crushes Lizard..\n";
  } else if (user == 4 && comp == 2) {
    cout << "User Wins! Lizard Eats Paper..\n";
  } else if (user == 4 && comp == 3) {
    cout << "Computer Wins with 3! Scissors Decapitate Lizard..\n";
  } else if (user == 4 && comp == 5) {
    cout << "User Wins! Lizard Poisons Spock..\n";
  }
  //Spock
  else if (user == 5 && comp == 1) {
    cout << "User Wins! Spock Vaporizes Rocks..\n";
  } else if (user == 5 && comp == 2) {
    cout << "Computer Wins with 2! Paper Disproves Spock..\n";
  } else if (user == 5 && comp == 3) {
    cout << "User Wins! Spock Smashes Scissors..\n";
  } else if (user == 5 && comp == 4) {
    cout << "Computer Wins with 4! Lizard Poisons Spock..\n";
  }

  else {
    cout << "You both chose " << user << " - Tie!!!\n";
  }
  return 0;
}
