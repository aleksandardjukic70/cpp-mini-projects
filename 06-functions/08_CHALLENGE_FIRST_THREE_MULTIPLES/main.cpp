#include <iostream>
#include <vector>
// PROGRAM MNOZI ARGUMENT SA 1, 2 I 3 I VRACA REZULTAT
// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  
  std::vector<int> multiply = {num, num * 2, num * 3};
  return multiply;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}