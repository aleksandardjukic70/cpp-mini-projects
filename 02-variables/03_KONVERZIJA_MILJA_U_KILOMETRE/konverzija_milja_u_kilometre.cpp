#include <iostream>

int main() {
// KONVERZIJA MILJA U KILOMETRE  
// formula km = miles * 1.609344
    
    double rastojanjeUMiljama = 0;
    double rastojanjeUKilometrima = 0;

    std::cout << "Unesite rastojanje u miljama: \n";

    std::cin >> rastojanjeUMiljama;

    rastojanjeUKilometrima = rastojanjeUMiljama * 1.609344;

    std::cout << "Ovo rastojanje iznosi: " << rastojanjeUKilometrima << " km\n";
}