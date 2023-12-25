#include <iostream>

int main() {
  
  int width = 0;
  int length = 0;
  
  std::cout << "Unesite sirinu: \n\n";
  std::cin >> width;
  
  std::cout << "Unesite duzinu: \n\n";
  std::cin >> length;

  int ratio = width / length;

  std::cout << ratio << "\n";
  
}