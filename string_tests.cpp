#include <iostream>
#include "string.h"

//Main

int main() {

  // Constructor
  string s1;
  std::cout << s1.get_s() << std::endl;

  // Function size()
  std::cout << s1.size() << std::endl;

  // Copy Constructor
  string s2(s1) ;
  std::cout << s2.get_s() << std::endl;

  return 0;
}
