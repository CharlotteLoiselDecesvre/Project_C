// Class declarations

class string {
  protected:
    // Data member
    char* s_;
    int len ;
    int len_max = 100 ;
    char s_bis[100];
    int Capacity;
  public:
    // Constructor
    string();
    string(const string& p);
    string(const char* str);

    // Destructor
    ~string();

    // Procedures and functions
    char* get_schar() const;
    int size() const;
    void clear();
    char* c_str();
    int  length() const;
    float max_size();
    void resize(size_t n,char c);
    bool empty() const ;
    void reserve (size_t n = 0);
    int capacity() const ;

    // Operator :
    string& operator= (const char* s);
    //string& operator= (const string& str);
    string& operator= (char c);

};
string operator+(const string& str, const char* rhs);
string operator+(const string& str, const string& rhs);
