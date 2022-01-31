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

  // // Operator+(const char*)
  // char* c2 = new char('W');
  // s1=s6+c2;
  // s1.get_schar();
  // std::cout << s1.size() << std::endl;
  // delete c2;

  // --------- TEST STUDENT C ------------ :
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




    std::cout <<std::endl<< "--------- test operators ---------" << std::endl;
    // Test OPERATOR =
    std::cout <<"test operator=(const char*) : "<< std::endl;
    s7=test1;
    std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
    std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
    std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;

    std::cout <<"test operator+(const string&, const string&) : "<< std::endl;
    s7 = s5 + s5;
    std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
    std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
    std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;
    //Pas demandé
    std::cout <<"test operator+(const string&, const char*): "<< std::endl;
    char* a=new char('c');
    s7 = s5+a ;
    std::cout <<"\ts7 = "<< s7.get_schar() << std::endl;
    std::cout <<"\ts7 has a length of :"<< s7.length() << std::endl;
    std::cout <<"\ts7 has a memory capacity of :" << s7.capacity() <<std::endl;


    std::cout <<std::endl<< "--------- test destructor ---------" << std::endl;
    std::cout <<"\tWe create s8 "<< std::endl;
    string * s8=new string("Hello");

    std::cout <<"\ts8 = "<< s8->get_schar() << std::endl;
    std::cout <<"\tWe try to delete s8 using the destructor"<< std::endl;
    s8->~string();
    std::cout <<"\ts8 = "<< s8->get_schar() << std::endl;


  return 0;
}
