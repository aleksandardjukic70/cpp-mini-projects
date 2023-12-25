#include <iostream>

int main() {
	//So a one-year-old dog is 10.5 years old in human years, 
	//and a two-year-old dog is 21 years old in human years… 
	//hmm this is about to get more complicated. 
	//Before you start doing the math in your head, let a computer take care of it!
  
  //fixed input
  int dog_age = 3;
  
  //for dogs first two years
  int early_years = 21; 
  //The first two years of a dog’s life count as 21 human years.
  
  //for dogs following years
  int later_years = (dog_age - 2) * 4;
  //Each following year counts as 4 human years.
  //-2 zato sto kada oduzmemo 2 tj. early_years (2 = 21, dobijemo OSTATAK koji predstavlja varijablu later_years
  
  int human_years = early_years + later_years;

  std::cout << "Zovem se Dzeki, imam " << human_years << " godina u ljudskim godinama.";



}