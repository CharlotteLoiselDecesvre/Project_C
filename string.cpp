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

/*int string::length(){
  return len;
}*/

/*void string::clear(){
  for(int i=0;i<len;i++){
    s_[i]= ' ';
  }
  s_[len]='\0';
}*/

// char* string::c_str(){
//   return this -> &s_;
// }

/*void string::resize(int n, char c){
  if (n > this -> len){
    this -> clear();
    for(int i = 0; i<n; i++){
      this->s_[i] = this->s_[i];
    }
  }
  if (n < this -> len){
    for(int i = len; i<n; i++){
      this->s_[i] = c;
    }
  }
}*/
