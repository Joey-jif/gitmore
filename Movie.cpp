#include "Movie.h"

// Constructor implementation
Movie::Movie(int id, std::string title, std::string genre, int releaseYear)
    : id(id), title(title), genre(genre), releaseYear(releaseYear), watchStatus(false), rating(0) {}

// Getters implementation
int Movie::getId() const { return id; }
std::string Movie::getTitle() const { return title; }
std::string Movie::getGenre() const { return genre; }
int Movie::getReleaseYear() const { return releaseYear; }
bool Movie::getWatchStatus() const { return watchStatus; }
int Movie::getRating() const { return rating; }

// Setters implementation
void Movie::setWatchStatus(bool status) { watchStatus = status; }
void Movie::setRating(int r) { 
    if (r >= 1 && r <= 5) {
        rating = r; 
    }
}
