#include <iostream>
#include <cstdlib>

int main () {

  std::cout << "MAGIC 8-BALL:\n";

  //"seed" of the random number generator
  srand(time(NULL));

  //moduo odredjuje 10 opcija koje ce program da ispisuje
  int answer = std::rand() % 10;
  //rand() je funkcija is cstdlib biblioteke koja generise nasumicne vrednosti

  switch (answer) {
    case 0:
    std::cout << "It is certain.\n";
    break;
    case 1:
    std::cout << "My sources say no.\n";
    break;
    case 2:
    std::cout << "Without a doubt.\n";
    break;
    case 3:
    std::cout << "Yes - definitely.\n";
    break;
    case 4:
    std::cout << "Very doubtful.\n";
    break;
    case 5:
    std::cout << "As I see it, yes.\n";
    break;
    case 6:
    std::cout << "Most likely.\n";
    break;
    case 7:
    std::cout << "My reply is no.\n";
    break;
    case 8:
    std::cout << "Signs point to yes.\n";
    break;
    case 9:
    std::cout << "Better not tell you now.\n";
    break;
  }
  //program se izvrsio uspesno i dosao je do kraja
  return 0;
}