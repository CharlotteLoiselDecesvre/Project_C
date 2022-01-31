// Class declarations

class string {
  protected:

     int len_max = 100 ;
    char s_bis[100];

    int Capacity;
  public:

    char* s_;
    //char s_[100];
    int len = sizeof s_ ;
    string();
    string(const string& p);
    string(const char* str);
    ~string();

    char get_s();
    char* get_schar() const;
    int size();
    void clear();
    char* c_str();
    int  length() const;
    int max_size() const;
    void resize(int n,char c);

    bool empty() const ;
    void reserve (int n = 0);
    int capacity() const ;


    //friend string& operator+(const string& lhs, const char* rhs);
    //string& operator= (const string& str);
    //string operator+ (const string& lhs, const string& rhs);

    //operator= :
    string& operator= (const char* s);
    string& operator=(char c);

};
string operator+(const string& str, const char* rhs);
string operator+(const string& str, const string& rhs);

