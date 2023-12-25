#include <iostream>
#include <cmath>

int main() {
  //RESAVANJE KVADRATNE JEDNACINE
  
  double a, b, c;
  double root1; //ovo je x1
  double root2; //ovo je x2

  std::cout << "Enter a:\n";
  std::cin >> a;

  std::cout << "Enter b:\n";
  std::cin >> b;

  std::cout << "Enter c:\n";
  std::cin >> c;

  /*root1 = ((b * -1) + (std::sqrt((b * b) - (4 * a * c)))) / (2 * a);
  root2 = (b * -1 - (std::sqrt((b * b) - (4 * a * c)))) / (2 * a);*/
  
  //x= (-b + koren iz(b^2 - 4ac)) / 2a
  root1 =(-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  //x= (-b - koren iz(b^2 - 4ac)) / 2a
  root2 =(-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

}