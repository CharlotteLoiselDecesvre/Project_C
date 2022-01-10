#include "string.h"

//Functions and procedures declarations

//std::string get_s();
//std::string string();


// Constructors definitions
string::string(){
  s_[0]='H';
  s_[1]='e';
  s_[2]='l';
  s_[3]='l';
  s_[4]='o';
  s_[5]='W';
  s_[6]='o';
  s_[7]='r';
  s_[8]='d';
}


// Functions and procedures definitions

char* string::get_s(){
  return this -> s_;
}
