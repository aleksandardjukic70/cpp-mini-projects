#include <iostream>

int main() {
  //PROGRAM KOJI PROVERAVA DA LI JE GODINA PRESTUPNA
  int y = 0;
  
  std::cout << "Enter year: ";
  std::cin >> y;
  
  if (y < 1000 || y > 9999) {
    
    std::cout << "Invalid entry.\n";
    
  }
  //DA BI GODINA BILA PRESTUPNA MORAJU BITI ISPUNJENI SLEDECI USLOVI:
  //1. GODINA MORA BITI DELJIVA SA 4 BEZ OSTATKA DA BI BILA PRESTUPNA
  //2. ALI AKO JE GODINA DELJIVA SA 100 BEZ OSTATKA ONA NIJE PRESTUPNA, SEM AKO JE DELJIVA SA 400 BEZ OSTATKA ONDA JESTE
  //STO IMPLICIRA DA AKO JE DELJIVA SA 4 BEZ OSTATKA, ONDA MORA DA IMA OSTATAK AKO SE PODELI SA 100
  //A AKO JE DELJIVA SA 100 BEZ OSTATKA ONDA MORA BITI DELJIVA SA 400 BEZ OSTATKA DA BI BILA PRESTUPNA
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

    std::cout << y;
    std::cout << " falls on a leap year.\n";
    
  }
  else {
    
    std::cout << y;
    std::cout << " is not a leap year.\n";
    
  }
  
}
