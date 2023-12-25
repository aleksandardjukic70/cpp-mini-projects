#include <iostream>


void enter_code(int passcode) {
  //ovaj string je vidljiv samo u okviru ove funkcije
  std::string secret_knowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

  //nakon ovog if iskaza, string iznad ce biti ispisan samo ako je passcode isti kao i onaj u main metodu
  if (passcode == 0310) {
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
  enter_code(0310);
  
}