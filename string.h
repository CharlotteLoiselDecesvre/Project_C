// Class declarations

class string {
  protected:
    char* s_;
    int len ;
    const int len_max = 100 ;
  public:
    string();
    string(const string& p);
    string(const char* str);
    ~string();
    char get_s();
    int size();
    void clear();
    //char* c_str();
    //int length();
    //void resize(int n, char c);

};
