// Class declarations

class string {
  protected:
    char *s_;
    int len ;
    static const int len_max = 100 ;
    char s_bis[100];
  public:
    string();
    string(const string& p);
    string(const char* str);
    ~string();
    char get_s();
    int size();
    void clear();
    char* c_str();
    //string& operator=(char c);
    size_t length() const;
    size_t max_size() const;
    void resize(size_t n,char c);
    //string& operator= (const string& str);
    //string operator+ (const string& lhs, const string& rhs);

};
