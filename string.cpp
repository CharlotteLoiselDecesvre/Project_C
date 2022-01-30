#include<iostream>
#include <cstring>
#include "string.h"

// Constructors definitions

string::string(){
  s_ = nullptr;
  len = 0;
}
// test student c
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

string& string::operator=(char c){
  this->s_[0]= c;
  this->s_[1]='\0';
  this->len=1;
  return *this;
}

// string& operator+(const string& lhs, const char* rhs){
//   string str(lhs);
//   str.len+=1;
//   str.s_[str.len-1]=*rhs;
//   str.s_[str.len]='\0';
//   return str;
//
//
//   // this->len=lhs.len+1;
//   // memcpy(this->s_,lhs, lhs.len);
//   // this->s_[len-1]= *rhs;
//   // this->s_[len]='\0';
//   // return *this;
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
  std::cout << "empty string" << std::endl;
  return 0 ;
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
// student c 
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
