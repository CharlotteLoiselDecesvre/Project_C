#include <iostream>
#include "string.h"

//Main

int main() {

  // Test CONSTRUCTORS
  std::cout << "--------- test constructors ---------" << std::endl;
  string s1;
  std::cout <<"\ts1 = "<< s1.get_schar() << std::endl;

  string s2("n");
  std::cout <<"\ts2 = "<< s2.get_schar() << std::endl;

  string s3("Hello");
  std::cout <<"\ts3 = "<< s3.get_schar() << std::endl;

  string s6("Thomas");
  std::cout <<"\ts6 = "<< s6.get_schar() << std::endl;

  // Test SIZE() et LENGTH()
  std::cout << "--------- test size() and length() ---------" << std::endl;
  std::cout << "\ts1 has a length of :"<< s1.size() << std::endl;
  std::cout << "\ts2 has a length of :"<< s2.size() << std::endl;
  std::cout << "\ts3 has a length of :"<< s3.length() << std::endl;

  // Test COPY CONSTRUCTOR
  std::cout << "--------- test copy constructor ---------" << std::endl;
  string s4(s3) ;
  std::cout << "We copy s3 in s4." << std::endl;
  std::cout <<"\ts4 = "<< s4.get_schar() << std::endl;
  std::cout <<"\ts4 has a length of :"<< s4.size() << std::endl;

  // Test CLEAR()
  std::cout << "--------- test clear() ---------" << std::endl;
  s3.clear();
  std::cout << "We use clear() on s3" << std::endl;
  std::cout << "\ts3 = "<< s3.get_schar() << std::endl;
  std::cout << "\ts3 has a length of :" << s3.size() << std::endl;

  // Test C_STR()
  std::cout << "--------- test c_str() ---------" << std::endl;
  string s5 = s4.c_str();
  std::cout << "We compile : string s5 = s4.c_str(); " << std::endl;
  std::cout << "\ts5 = "<< s5.get_schar() << std::endl;
  std::cout << "\ts5 has a length of :" << s5.size() << std::endl;

  // Test max_size
  std::cout << "--------- test max_size() ---------" << std::endl;
  std::cout << "We look for max size of a string for example s6" << std::endl;
  std::cout << s6.max_size() << std::endl;

  //Test RESIZE()
  std::cout << "--------- test resize() ---------" << std::endl;
  std::cout << "We are going to resize s6 in 3 different ways : " << std::endl;
  std::cout << "\ts6 = "<< s6.get_schar() << std::endl;
  std::cout << "We  add the character n to reach size 10 :" << std::endl;
  s6.resize(10,'n');
  std::cout << "\ts6 = "<< s6.get_schar() << std::endl;
  std::cout << "We delete characters to go back to size 5 :" << std::endl;
  s6.resize(5,'n');
  std::cout << "\ts6 = "<< s6.get_schar() << std::endl;
  std::cout << "If we put the same size that the string has already, nothing is happening :" << std::endl;
  s6.resize(5,'n');
  std::cout << "\ts6 = "<< s6.get_schar() << std::endl;

  /*
  // Test CAPACITY EMPTY AND RESERVE
  char test1[] = "Some string";

  string s7 (test1);
  std::cout << "--------- test capacity() and reserve() empty() ---------" << std::endl;
  std::cout <<"test Capactiy(): "<< std::endl;
  std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
  std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
  std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;

  std::cout <<"\tWe check if s7 is empty (0 for false 1 for true) : " << s7.empty() <<std::endl;

  std::cout <<"We reserve a memory capacity of 20 for s7" <<std::endl;
  s7.reserve(20);
  std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
  std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
  std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;

  std::cout <<"We reserve a memory capacity of 5 for s7" <<std::endl;
  s7.reserve(5);
  std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
  std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
  std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;

  std::cout <<"We reserve a memory capacity of 0 for s7" <<std::endl;
  s7.reserve(0);
  std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
  std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
  std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;
  std::cout <<"\tWe check if s7 is empty (0 for false 1 for true) : " << s7.empty() <<std::endl;



  // Test OPERATOR
  std::cout <<std::endl<< "--------- test operators ---------" << std::endl;

  std::cout <<"test operator=(char c) : "<< std::endl;
  char c1='R';
  s2=c1;
  std::cout << "\ts2 = "<< s2.get_schar() << std::endl;
  std::cout << "\ts2 has a length of :"<< s2.size() << std::endl;

  std::cout <<"test operator=(const char*) : "<< std::endl;
  s7=test1;
  std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
  std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
  std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;

  std::cout <<"test operator+(const string&, const string&) : "<< std::endl;
  string s8 = string("Hello") + string(" you");
  std::cout <<"\ts8 = "<< s8.get_schar() << std::endl;
  std::cout <<"\ts8 has a length of :"<< s8.length() << std::endl;
  std::cout <<"\ts8 has a memory capacity of :" << s8.capacity() <<std::endl;

  std::cout <<"test operator+(const string&, const char*): "<< std::endl;
  char* a=new char('c');
  string s9 = s5+a ;
  std::cout <<"\ts9 = "<< s9.get_schar() << std::endl;
  std::cout <<"\ts9 has a length of :"<< s9.length() << std::endl;
  std::cout <<"\ts9 has a memory capacity of :" << s9.capacity() <<std::endl;

  // Test DESTRUCTOR
  std::cout <<std::endl<< "--------- test destructor ---------" << std::endl;
  std::cout <<"\tWe create s10 "<< std::endl;
  string * s10=new string("Hello");

  std::cout <<"\ts10 = "<< s10->get_schar() << std::endl;
  std::cout <<"\tWe try to delete s10 using the destructor"<< std::endl;
  s10->~string();
  std::cout <<"\ts10 = "<< s10->get_schar() << std::endl;
*/
  return 0;
}
