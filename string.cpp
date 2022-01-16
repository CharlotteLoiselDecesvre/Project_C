#include "string.h"

// Constructors definitions
string::string(){
  // s_[0]='H';
  // s_[1]='e';
  // s_[2]='l';
  // s_[3]='l';
  // s_[4]='o';
  // s_[5]='W';
  // s_[6]='o';
  // s_[7]='r';
  // s_[8]='d';
  for(int i=0;i<len;i++){
    s_[i]= ' ';
  }
  s_[len]='\0';
}

string::string(const string& p){
  len = p.len ;
  for(int i=0;i<len;i++){
     s_[i]=p.s_[i];
  }
  s_[len] = p.s_[len];
}

// Functions and procedures definitions

char* string::get_s(){
  return this -> s_;
}

int string::size(){
  return len;
}

// void string::clear(){
//   this.resize(0);
// }

// char* string::c_str(){
//   return this -> &s_;
// }
