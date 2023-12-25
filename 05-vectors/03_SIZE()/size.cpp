#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  
  grocery.push_back("sok");
  grocery.push_back("voda");
  grocery.push_back("Cips");
  
  std::cout << grocery.size() << " \n";
  
  
}