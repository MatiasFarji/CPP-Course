#ifndef __INSUFFICENT_FUNDS_EXCEPTION_H__
#define __INSUFFICENT_FUNDS_EXCEPTION_H__
#include <exception>

class InsufficentFundsException: public std::exception
{
public:
    InsufficentFundsException() noexcept {}
    ~InsufficentFundsException() {}
    virtual const char* what() const noexcept {
        return "Insufficent Funds";
    };
};

#endif // __INSUFFICENT_FUNDS_EXCEPTION_H__
