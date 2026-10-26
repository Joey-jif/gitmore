#include "MovieManager.h"
#include <iostream>

MovieManager::MovieManager() : nextId(1) {}

void MovieManager::addMovie(const std::string& title, const std::string& genre, int releaseYear) {
    movies.push_back(std::make_unique<Movie>(nextId++, title, genre, releaseYear));
}

void MovieManager::editMovie(int id, bool newStatus) {
    for (auto& movie : movies) {
        if (movie->getId() == id) {
            movie->setWatchStatus(newStatus);
            std::cout << "Updated watch status for movie ID " << id << std::endl;
            return;
        }
    }
    std::cout << "Movie ID " << id << " not found." << std::endl;
}

void MovieManager::rateMovie(int id, int rating) {
    for (auto& movie : movies) {
        if (movie->getId() == id) {
            movie->setRating(rating);
            std::cout << "Rated movie ID " << id << " with " << rating << "/5" << std::endl;
            return;
        }
    }
    std::cout << "Movie ID " << id << " not found." << std::endl;
}

void MovieManager::displayAll() const {
    if (movies.empty()) {
        std::cout << "No movies in the manager." << std::endl;
        return;
    }
    for (const auto& movie : movies) {
        std::cout << "ID: " << movie->getId() 
                  << " | Title: " << movie->getTitle() 
                  << " | Genre: " << movie->getGenre() 
                  << " | Year: " << movie->getReleaseYear() 
                  << " | Watched: " << (movie->getWatchStatus() ? "Yes" : "No") 
                  << " | Rating: " << movie->getRating() << "/5" << std::endl;
    }
}