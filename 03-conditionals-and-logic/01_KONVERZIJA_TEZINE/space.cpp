#include <iostream>

int main() {
  //KONVERZIJA ZEMALJSKE TEZINE U TEZINU NA DRUGIM PLANETAMA
  double weight;
  int planet;
  
  std::cout << "Unesite vasu zemaljsku tezinu:\n";
  std::cin >> weight;

  std::cout << " Merkur 1\n Venera 2\n Mars 3\n Jupiter 4\n Saturn 5\n Uran 6\n Neptun 7\n";
  std::cout << "Input number for planet you want to fight on:\n";
  std::cin >> planet;

  switch (planet) {
    case 1: 
      std::cout << "Vasa tezina na Merkuru iznosi: " << weight * 0.38 << " kg\n";
      break;
    case 2: 
      std::cout << "Vasa tezina na Veneri iznosi: " << weight * 0.91 << " kg\n";
      break;
    case 3: 
      std::cout << "Vasa tezina na Marsu iznosi: " << weight * 0.38 << " kg\n";
      break;
    case 4: 
      std::cout << "Vasa tezina na Jupiteru iznosi: " << weight * 2.34 << " kg\n";
      break;
    case 5: 
      std::cout << "Vasa tezina na Saturnu iznosi: " << weight * 1.06 << " kg\n";
      break;
    case 6: 
      std::cout << "Vasa tezina na Uranu iznosi: " << weight * 0.92 << " kg\n";
      break;
    case 7: 
      std::cout << "Vasa tezina na Neptunu iznosi: " << weight * 1.19 << " kg\n";
      break;
  }
  
}