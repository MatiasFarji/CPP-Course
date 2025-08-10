#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money operator+(const Money &lhs, const Money &rhs) {
    Money *sum = new Money((lhs.dollars + rhs.dollars) * 100 + lhs.cents + rhs.cents);
    return *sum;
}


//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


