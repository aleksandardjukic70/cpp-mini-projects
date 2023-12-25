#include <iostream>
#include "fns.hpp"
// fns.hpp UVOZI DEKLARACIJE FUNKCIJA IZ fns.cpp U main.cpp DA BI POJEDNOSTAVILI KOD

int main() {
  
  std::cout << is_palindrome("noon") << "\n";
  std::cout << tenth_power(4) << "\n";
  std::cout << average(4.0, 7.0) << "\n";
  
}