#include<iostream>
#include <cstring>
#include<math.h>
#include "string.h"

// Constructors definitions

string::string(){
  s_ = nullptr;
  len = 0;
  Capacity=0;
}

string::string(const char* str){
    int i=0;
    while (str[i]!='\0'){
        i+=1;
    }
    len=i;
    s_ = new char[i+1];
    Capacity=i+1;
    memcpy(s_,str, len);
    this->s_[len]='\0';
}

string::~string(){
    this->Capacity=0;
    this->len=0;
    delete[] this->s_;
    this->s_=nullptr;
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

char* string::get_schar() const{
    if (!this->empty())
        return s_;
    char *temp = (char*) "empty string";
    return temp;
}

int string::size() const{
  return len;
}
int string::length() const{
  return len;
}

void string::clear(){

  s_ = nullptr;
  len = 0;
}

char* string::c_str(){
  return this->s_;
}

float string::max_size(){
  float max_size = pow(2,__WORDSIZE); //Nbre de bits à la puissance 2
  return max_size;
}

void string::resize(size_t n, char c){
  if (n < this->length()){
    for(len = this->length(); len > n; len--){
      s_[len]='\0';
    }
  }
  else if (n > this -> length()){
    for(len = this->length(); len <= n; len++){
          s_[len+1]='\0';
          s_[len]=c;
      }
      s_[len]='\0';
  }
  else{
  std::cout << " It is the same size : " << this->length() << std::endl;
   }
}

// means allocating memory dinamically
int string::capacity() const  {
    return Capacity;
}

bool string::empty() const  {
    if (s_== nullptr or s_[0]==char('\0')){
        return true;
    }else {
        return false;
    }
}

void string::reserve(size_t n) {
    // n is the new capacity of the string
    int MAX_CAPACITY =len_max+1;
    int MIN_CAPACITY = 1;
    int NEW_CAPACITY = std::max(std::min(MAX_CAPACITY,int(n)),MIN_CAPACITY);

    char* NewS_ =new char[NEW_CAPACITY];
    if (NEW_CAPACITY!=1) {
        for (int i = 0; i < NEW_CAPACITY; i++) {
            NewS_[i] = s_[i];
            if (i == (NEW_CAPACITY - 1))
                NewS_[NEW_CAPACITY] = char('\0');

        }
    }else{
        NewS_[0]='\0';
    }
    delete[] s_;
    s_ =NewS_;
    Capacity=NEW_CAPACITY;
    len=std::max(std::min(NEW_CAPACITY-1,len),0);
}

// Operators definitions

string& string::operator=(char c){
  this->s_[0]= c;
  this->s_[1]='\0';
  this->len=1;
  return *this;
}

string &string::operator= (const string &str){
  this->Capacity=str.len+1;
  this->s_=new char [str.len+1];
  this->len=str.len;
  memcpy(s_,str.s_,len);
  return *this;
}

string &string::operator=(const char *str) {
    int i=0;
    while (str[i]!='\0'){
        i+=1;
    }
    len=i;
    delete[] s_;
    s_ = new char[i+1];
    Capacity=i+1;
    memcpy(s_,str, len);
    this->s_[len]='\0';
    return *this;
}



string operator+(const string& str, const char* rhs ){
    char * s_=str.get_schar();
    int len = str.length();
    char * newStr=new char[len+2];
    memcpy(newStr,s_, len);
    newStr[len]= * rhs;
    newStr[len+1]='\0';
    return {newStr};
}

string operator+(const string& str, char rhs ){
    char * s_=str.get_schar();
    int len = str.length();
    char * newStr=new char[len+2];
    memcpy(newStr,s_, len);
    newStr[len]= rhs;
    newStr[len+1]='\0';
    return {newStr};
}

string operator+(const string& str,const string &rhs) {
    int N=str.length()+ rhs.length();
    char *newstr =new char[N+1];
    char a;
    for (int i =0;i<N;i++){
        if (i<str.length()) {
            a= str.get_schar()[i];
        }else{
            a= rhs.get_schar()[i-str.length()];
        }
        newstr[i]=a;
    }
    newstr[N]='\0';
    return {newstr};
}
