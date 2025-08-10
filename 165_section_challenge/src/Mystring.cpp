#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}


Mystring& Mystring:: operator-() {
    char *buff = new char [std::strlen(this->str)] {};
    std::strcpy(buff, this->str);
    for (int i = 0; i < std::strlen(buff); i++) {
        this->str[i] = std::tolower(buff[i]);
    }
    delete [] buff;

    return *this;

}; //Tolower

//Compare the strings equal
bool Mystring::operator==(const Mystring &rhs) const {
    return std::strcmp(this->str, rhs.str) == 0;

};
//Compare the strings not equal
bool Mystring::operator!=(const Mystring &rhs) const {
    return std::strcmp(this->str, rhs.str) != 0;

};
//Lexically greater than
bool Mystring::operator>(Mystring &rhs) const {
    bool isgreater {false};
    for (int i = 0; i < std::strlen(this->str); i++) {
        if (this->str[i] > rhs.str[i]) {
            isgreater = true;
            break;
        } else if (this->str[i] < rhs.str[i]) {
            break;
        } //Else sigue comparando
    }
    return isgreater;

};

//Lexically lower than
bool Mystring::operator<(Mystring &rhs) const {

    bool islower {false};
    for (int i = 0; i < std::strlen(this->str); i++) {
        if (this->str[i] < rhs.str[i]) {
            islower = true;
            break;
        } else if (this->str[i] > rhs.str[i]) {
            break;
        } //Else sigue comparando
    }
    return islower;
};

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1] {};
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
};

//Concatenate and replace
Mystring& Mystring::operator+=(const Mystring &rhs) {
    char *buff = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1] {};
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);
    std::strcpy(this->str, buff);
    delete [] buff;
    return *this;

};

//Repeat n times
Mystring Mystring::operator*(int n) const{
    if (n <= 0) {
        Mystring temp;
        return temp;
    }
    char *buff = new char[(std::strlen(this->str) * n) + 1] {};
    for (int i = 1; i <= n; i++) {
        std::strcat(buff, this->str);
    }

    Mystring temp {buff};
    delete [] buff;
    return temp;
};


Mystring& Mystring::operator*=(int n) {
    if (n <= 0) {
        return *this;
    }
    char *buff = new char[(std::strlen(this->str) * n) + 1] {};
    for (int i = 1; i <= n; i++) {
        std::strcat(buff, this->str);
    }

    delete [] this->str;
    this->str = new char [std::strlen(buff) + 1] {};

    std::strcpy(this->str, buff);
    delete [] buff;

    return *this;
};