#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  
  // OVO IZBACUJE RANDOM BROJEVE OD 0 - 28
  int the_amazing_random_number = rand() % 29;

  std::cout << the_amazing_random_number << " \n";
}