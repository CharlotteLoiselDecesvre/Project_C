// Class declarations

class string {
  protected:
    char s_[100];
    int len = sizeof s_ ;
    int len_max = 100;
  public:
    string();
    string(const string& p);
    char* get_s();
    int size();
    //void clear();

};
