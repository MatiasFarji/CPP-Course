#include "Movie.h"
#include <vector>
#include <iostream>

std::string Movie::set_rating(std::string rating = "R") {
    std::vector<std::string> allowed_ratings {"G", "PG", "PG-13", "R"};
    bool allowed = false;
    for (std::string allowed_rating : allowed_ratings) {
        if (rating == allowed_rating) {
            allowed = true;
            break;
        }
    }

    if (!allowed) {
        std::cout << "The movie Rating " << rating << " doesn't exist in our categories G,PG,PG-13,R" << std::endl;
        rating = "R";
    }
    return rating;
}