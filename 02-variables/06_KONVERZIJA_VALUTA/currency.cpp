#include <iostream>

int main() {
	//KONVERZIJA VALUTA 
  
  double pesos, reais, soles, converted;

  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;
  
  converted = (pesos * 0.057) + (reais * 0.20) + (soles * 0.27);
  std::cout << "US Dollars = $" << converted << "\n";
}