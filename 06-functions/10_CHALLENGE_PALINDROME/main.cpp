#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  
  //string u kom cuvamo tekst koji ide otpozadi
  std::string reversed_text = "";
  
  // int i = text.size() - 1 daje poslednji index u nizu
 /*	  The expression text.size() - 1 is used to obtain the index of the last character in the string because text.size() 
	  returns the number of characters in the string.

		Here's why it gives the last index:

		String Indices Start at 0:

		If a string has N characters, the valid indices are from 0 to N-1.
		text.size():

		Returns the total number of characters in the string.
		text.size() - 1:

		Subtracts 1 from the total size to get the index of the last character.
		For example, let's say you have a string "hello":

		The size of the string is 5 (because there are five characters: 'h', 'e', 'l', 'l', 'o').
		text.size() - 1 would be 5 - 1 = 4.
		So, i is initialized to 4, which is the index of the last character ('o').
	*/
  
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text += text[i];
  }
  
  if (reversed_text == text) {
    return true;
  }
  
  return false;
  
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}