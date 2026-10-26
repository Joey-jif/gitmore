#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    int id;
    std::string title;
    std::string genre;
    int releaseYear;
    bool watchStatus; // false = want to watch, true = watched
    int rating;       // 1 to 5 scale

public:
    Movie(int id, std::string title, std::string genre, int releaseYear);

    // Getters
    int getId() const;
    std::string getTitle() const;
    std::string getGenre() const;
    int getReleaseYear() const;
    bool getWatchStatus() const;
    int getRating() const;

    // Setters / Modifiers
    void setWatchStatus(bool status);
    void setRating(int r);
};

#endif