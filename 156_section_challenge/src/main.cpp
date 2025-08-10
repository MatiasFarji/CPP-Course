#include "Movies.h"

int main() {
    Movies hoyts_collection {};
    std::string movie_name {"Destino final 7"};
    std::string movie_rating {"R"};
    hoyts_collection.add_movie(movie_name, movie_rating);
    hoyts_collection.increase_watched_times(movie_name);

    movie_name = "Harry potter 1";
    movie_rating = "GA";
    hoyts_collection.add_movie(movie_name, movie_rating);
    hoyts_collection.increase_watched_times(movie_name);
    hoyts_collection.increase_watched_times(movie_name);
    hoyts_collection.increase_watched_times(movie_name);
    hoyts_collection.add_movie(movie_name, movie_rating);
    hoyts_collection.add_movie(movie_name, movie_rating);


    movie_name = "Harry potter 2";
    movie_rating = "PG-13";
    hoyts_collection.add_movie(movie_name, movie_rating);

    hoyts_collection.display_movies(); 

    return 0;
}