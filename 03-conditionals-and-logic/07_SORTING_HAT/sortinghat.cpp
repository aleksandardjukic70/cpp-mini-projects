#include <iostream>

int main () {

  // Magija pocinje ovde

  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1 = 0, answer2 = 0, answer3 = 0, answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n";
  
  // PRVO PITANJE
  std::cout << "When I'm dead, I want people to remember me as:\n";
  std::cout << " 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n";
  std::cin >> answer1;


  switch(answer1) {
    case 1: hufflepuff++;
    break;

    case 2: slytherin++;
    break;

    case 3: ravenclaw++;
    break;

    case 4: gryffindor++;
    break;

    default: std::cout << "Invalid output\n";
    break;
  }
	// DRUGO PITANJE
  std::cout << "Dawn or Dusk\n";
  std::cout << " 1) Dawn\n 2) Dusk\n";
  std::cin >> answer2;

  switch(answer2) {
    case 1: gryffindor++; 
            ravenclaw++;
    break;

    case 2: slytherin++;
            hufflepuff++;
    break;

    default: std::cout << "Invalid output\n";
    break;
  }
	// TRECE PITANJE
  std::cout << "Which kind of instrument most pleases your ear?\n";
  std::cout << " 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum\n";
  std::cin >> answer3;

  switch(answer3) {
    case 1: slytherin++;
    break;

    case 2: hufflepuff++;
    break;

    case 3: ravenclaw++;
    break;

    case 4: gryffindor++;
    break;

    default: std::cout << "Invalid output\n";
    break;
  }

	// CETVRTO PITANJE
  std::cout << "Which road tempts you most?\n";
  std::cout << " 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled streed lined (ancient buildings)\n";
  std::cin >> answer4;

  switch(answer4) {
    case 1: hufflepuff++;
    break;

    case 2: slytherin++;
    break;

    case 3: gryffindor++;
    break;

    case 4: ravenclaw++;
    break;

    default: std::cout << "Invalid output\n";
    break;
  }

	// PROVERAVAMO KOJA KUCA IMA NAJVISE POENA
  int max = 0;
  std::string house;
  
  // AKO JE varijabla VECA OD max, max DOBIJA VREDNOST varijable I string house DOBIJA VREDNOST KOJA JE DEFINISANA U OKVIRU IF-A
  // PROVERAVA SE REDOM ZA SVE CETIRI varijable I NA KRAJU ISPISUJE string house
  if (gryffindor > max) {
    
    max = gryffindor;
    house = "Gryffindor";
    
  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";
    
  }

  if (ravenclaw > max) {
    
    max = ravenclaw;
    house = "Ravenclaw";
    
  }

  if (slytherin > max) {
    
    max = slytherin;
    house = "Slytherin";
    
  }

  
  std::cout << house << "!\n";

}