#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie {
    private:

        std::string name;
        std::string rating;
        int watched {0};
    public:
        std::string set_rating(std::string rating);
        Movie (std::string name_val, std::string rating_val = "R"): name{name_val}, rating{this->set_rating(rating_val)} {};
        friend class Movies;
};
#endif