#include <iostream>
#include "string.h"

//Main

int main() {

  // Constructor
  string s1;
  s1.get_s();

  //std::cout << "seg" << std::endl;

  string s2("n");
  s2.get_s();

  string s3("Hello");
  s3.get_s();

  // Function size()
  std::cout << s1.size() << std::endl;
  std::cout << s2.size() << std::endl;
  std::cout << s3.size() << std::endl;

  // Copy Constructor
  string s4(s3) ;
  s4.get_s();
  std::cout << s4.size() << std::endl;

  //Function clear
  s3.clear();
  s3.get_s();
  std::cout << s3.size() << std::endl;

  // Function c_str()
  string s5 = s4.c_str();
  s5.get_s();
  std::cout << s5.size() << std::endl;

  // Operator=(char c)
  // s2="R";  // s3="Hello" et s2="n"
  // s2.get_s();
  // std::cout << s2.size() << std::endl;

  return 0;
}
