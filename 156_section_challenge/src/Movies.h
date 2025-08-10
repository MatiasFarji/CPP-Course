#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>
#include <string>

class Movies {
    private:
        std::vector<Movie> movies_collection {};
    public:
        bool add_movie(std::string movie_name, std::string movie_rating);
        void increase_watched_times(std::string movie_name);
        void display_movies() const;
};

#endif