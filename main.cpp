#include <iostream>
#include "MovieManager.h"

int main() {
    // Constructing the manager object
    MovieManager manager;

    // Using its functions to prove it works
    std::cout << "--- Adding Initial Movies ---" << std::endl;
    manager.addMovie("Inception", "Sci-Fi", 2010);
    manager.addMovie("The Matrix", "Action", 1999);

    std::cout << "\n--- Displaying Movie List ---" << std::endl;
    manager.displayAll();

    std::cout << "\n--- Testing Edit and Rate ---" << std::endl;
    manager.editMovie(1, true); // Mark Inception as watched
    manager.rateMovie(1, 5);    // Give Inception a 5-star rating

    std::cout << "\n--- Final Movie List ---" << std::endl;
    manager.displayAll();

    return 0;
}
