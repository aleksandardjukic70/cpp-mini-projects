#include <iostream>
// PROGRAM ISPISUJE "PREZIME, IME PREZIME"
// Define introduction() here:
void introduction(std::string first_name, std::string last_name) {
	
  std::cout << last_name << ", "<< first_name << " " << last_name;
}

int main() {
  
  introduction("Beyonce", "Knowles");
  
}