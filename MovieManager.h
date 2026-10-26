#ifndef MOVIEMANAGER_H
#define MOVIEMANAGER_H

#include "Movie.h"
#include <vector>
#include <memory>
#include <string>

class MovieManager {
private:
    std::vector<std::unique_ptr<Movie>> movies;
    int nextId;

public:
    MovieManager();
    void addMovie(const std::string& title, const std::string& genre, int releaseYear);
    void editMovie(int id, bool newStatus);
    void rateMovie(int id, int rating);
    void displayAll() const;
};

#endif