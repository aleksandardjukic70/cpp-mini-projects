#include <iostream>
#include "song.hpp"

int main() {

  // INSTANCIRANJE OBJEKTA
  Song electric_relaxation;

  // DODAVANJE ATRIBUTA OBJEKTU POMOCU add_title METODA
  electric_relaxation.add_title("Electric Relaxation");
  
  // DOBIJANJE INFORMACIJA O ATRIBUTU OBJEKTA POMOCU get_title METODA
  std::cout << electric_relaxation.get_title();
  
}