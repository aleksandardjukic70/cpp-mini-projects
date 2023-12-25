#include <iostream>
#include <stdlib.h>

// ROCK, PAPER, SCISSORS GAME
int main () {

  // Live free or die

  // "seed" of the number generator
  srand (time(NULL));

  // random number that could be 1, 2 or 3
  int computer = rand() % 3 + 1;
  // user input variable
  int user = 0;
  
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";

  std::cin >> user;

  if (computer == 1 && user == 1) {
    std::cout << "Oba igraca su pokazala kamen, niko nije pobedio\n";
  } else if (computer == 1 && user == 2) {
    std::cout << "Kamen gubi od papira, korisnik je pobedio\n";
  } else if (computer == 1 && user == 3 ) {
    std::cout << "Kamen pobedjuje makaze, kompjuter je pobedio\n";
  } else if (computer == 2 && user == 1 ) {
    std::cout << "Papir pobedjuje kamen, kompjuter je pobedio\n";
  } else if (computer == 2 && user == 2 ) {
    std::cout << "Oba igraca su pokazala papir, niko nije pobedio\n";
  } else if (computer == 2 && user == 3 ) {
    std::cout << "Papir gubi od makaza, korisnik je pobedio\n";
  } else if (computer == 3 && user == 1 ) {
    std::cout << "Makaze gube od papira, korisnik je pobedio\n";
  } else if (computer == 3 && user == 2 ) {
    std::cout << "Makaze pobedjuju papir, kompjuter je pobedio\n";
  } else if (computer == 3 && user == 3 ) {
    std::cout << "Oba igraca su pokazala makaze, niko nije pobedio\n";
  }


}