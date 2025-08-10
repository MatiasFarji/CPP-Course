#include "Movies.h"
#include <iostream>

bool Movies::add_movie(std::string movie_name, std::string movie_rating)
{
    for (const Movie &m : this->movies_collection) {
        if (m.name == movie_name) {
            std::cout << "The movie " << movie_name << " already exists in our collections" << std::endl;
            return false;
        }
    }
    Movie new_movie {movie_name, movie_rating};
    this->movies_collection.push_back(new_movie);
    return true;
}

void Movies::increase_watched_times(std::string movie_name)
{
    bool increased {false};
    for (Movie &m : this->movies_collection) {
        if (m.name == movie_name) {
            m.watched++;
            increased = true;
            break;
        }
    }

    if (!increased) {
        std::cout << "The movie " << movie_name << " doesn't exist in our collection." << std::endl;
    }
}

void Movies::display_movies() const
{
    for (Movie m : this->movies_collection) {
        std::cout << "Movie : " << m.name << " has rating: " << m.rating << " and views: " << m.watched << std::endl;
    }
}