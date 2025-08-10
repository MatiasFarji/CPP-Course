#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    Mystring &operator-(); //Tolower
    bool operator==(const Mystring &rhs) const; //Compare the strings equal
    bool operator!=(const Mystring &rhs) const; //Compare the strings not equal
    bool operator>(Mystring &rhs) const; //Lexically greater than
    bool operator<(Mystring &rhs) const; //Lexically lower than
    Mystring operator+(const Mystring &rhs) const; //Concatenate
    Mystring& operator+=(const Mystring &rhs); //Concatenate and replace
    Mystring operator*(int n) const; //Repeat n times
    Mystring& operator*=(int n); //Repleace Repeat n times
    

    
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_