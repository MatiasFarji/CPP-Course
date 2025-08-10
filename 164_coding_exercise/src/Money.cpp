#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----


/* No friend
std::ostream &operator<<(std::ostream &os, const Money &rhs) {
    //Output :  "dollars: 1 cents: 70 ,no '\n' or endl should be added."
    os << "dollars: " << rhs.get_dollars() << " cents: " << rhs.get_cents();
    return os;
}
*/


//Friend
std::ostream &operator<<(std::ostream &os, const Money &rhs) {
    //Output :  "dollars: 1 cents: 70 ,no '\n' or endl should be added."
    os << "dollars: " << rhs.dollars << " cents: " << rhs.cents;
    return os;
}



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


