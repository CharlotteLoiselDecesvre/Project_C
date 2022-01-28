#include<iostream>
#include <cstring>
#include "string.h"

// Constructors definitions

string::string(){
  s_ = nullptr;
  len = 0;
}

string::string(const char* str){
  s_ = new char[len_max];
  int i=0;
  while (str[i]!='\0'){
    i+=1;
  }
  len = i;
  memcpy(s_,str, len);
  this->s_[len]='\0';
}

string::~string(){
  delete s_;
}

string::string(const string& p){
  // allocate the memory
  s_ = new char[len_max];
  len = p.len ;
  // copy the value from the passed object
  *s_=*p.s_;
  for(int i=0;i<len;i++){
     s_[i]=p.s_[i];
  }
  s_[len] = p.s_[len];
}

// Operators definitions

// string& string::operator=(char c){
//   len = 1;
//   s_ = new char(c);
//   return *this;
// }



// Functions and procedures definitions

char string::get_s(){
  if (s_!=nullptr){
    for (int i=0; i<len ; i++){
      std::cout << s_[i] ;
    }
    std::cout << ' ' << std::endl;
    return 0;
  }
  std::cout << '@' << std::endl;
  return 0 ;  //return char('@');
}

int string::size(){
  return len;
}
size_t string::length() const{
  return len;
}

void string::clear(){
  s_ = nullptr;
  len = 0;
}

char* string::c_str(){
  return this->s_;
}

void string::resize(size_t n, char c){
  string s_(s_bis);
  std::cout << "A" << std::endl;
  if (n < this->length()){
    std::cout << "B1" << std::endl;
    for(len = this->length(); len > n; len--){
      std::cout << "C1" << std::endl;
      s_bis[len]='\0';
    }
  }
  /*else if (n > this -> length()){
    std::cout << "B2" << std::endl;
    for(len = this->length(); len < n; len++){
      std::cout << "C2" << std::endl;
          s_bis[len+1]='\0';
          s_bis[len]=c;
      }
      s_bis[len]='\0';
    }*/
    else{
     std::cout << " Même taille : " << this->length() << std::endl;
   }
}
