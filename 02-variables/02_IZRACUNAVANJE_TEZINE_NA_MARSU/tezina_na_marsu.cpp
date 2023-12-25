#include <iostream>

int main() {
// IZRACUNAVANJE TEZINE PREDMETA NA MARSU  
// formula Weight on Mars= (Weight on Earth/9.81m/s2) * 3.711m/s2
    
    double tezinaNaZemlji = 0;
    double tezinaNaMarsu = 0;

    std::cout << "Unesite tezinu predmeta: \n";

    std::cin >> tezinaNaZemlji;

    tezinaNaMarsu = (tezinaNaZemlji/9.81) * 3.711;

    std::cout << "Tezina ovog predmeta bi na Marsu iznosila: " << tezinaNaMarsu;
}