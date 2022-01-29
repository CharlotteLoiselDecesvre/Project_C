#include <iostream>
#include "string.h"

//Main

int main() {

  // Constructors
  std::cout << "Les strings" << std::endl;
  string s1;
  s1.get_s();

  string s2("n");
  s2.get_s();

  string s3("Hello");
  s3.get_s();

  string s6("Thomas");

  // Function size()  et length()
  std::cout << "Taille des strings" << std::endl;
  std::cout << s1.size() << std::endl;
  std::cout << s2.size() << std::endl;
  std::cout << s3.length() << std::endl;

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

  //Function resize()
  s6.get_s();
  s6.resize(6,'n');
  s6.get_s();

  // Operator=(char c)
  char c1='R';
  s2=c1;
  s2.get_s();
  std::cout << s2.size() << std::endl;

  return 0;
}
