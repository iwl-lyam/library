#include <iostream>
#include "library.hpp"

void library(std::string employee) {

    std::cout << "\n\nWelcome to the library dashboard, " << employee << "!\n\n";

    // Register books - DO NOT TOUCH

    Book discordjs("A guide to Discord.js", "A book all about the Discord.js Library.", "Lyam Mosnier", 42, 1);
    Book Bloodlabs("Blood Labs", "A book about blood", "Kate Knower", 165, 2);
    Book pythonforbeginners("Python for Beginners", "A book on Python for beginners", "?", 144, 3);

    // Checkout any books - Add a 2 strings in the brackets for the certain
    // book when it needs to get checked out (<"name">) and the due date (<"due date">)
    // separated by a comma (,)

    discordjs.book_checkout();
    Bloodlabs.book_checkout();
    pythonforbeginners.book_checkout();

    // Search book details - Use <bookcodename>.get_book();



    // e.g. bookname.get_book();

    // --------------------

    // Register movies - DO NOT TOUCH

    Movie HarryPotterPhilosophersStone("Harry Potter and the Philosophers Stone", "A harry potter movie.", "?", 83, 1);
    Movie Lordoftherings("Lord of the Rings: The ring goes south", "A lord of the rings story", "?", 123, 2);

    // Checkout any movies - Add a string in the brackets
    // When they need to be checked out (<"name">)

    HarryPotterPhilosophersStone.movie_checkout("Lyam Mosnier", "29/12/20");
    Lordoftherings.movie_checkout();

    // vvvvvvv | Get movie details - format is "<moviecodename>.get_movie();"

    // ^^^^^^^ | e.g. movieBook.get_movie();

//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzzzzNOTHING TO SEE HEREzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz
//zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzDON'T TOUCH BELOWzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz\*

    // Keep program running - DO NOT TOUCH
    std::string stop;
    std::cin >> stop;
}

// You may touch this part though.

int main() {
    std::cout << "Please enter your Employee pin number to gain access to the library dashboard. ";
    int pin;
    std::cin >> pin;
    if (pin == 1234) {
        std::cout << "Pin correct.";
        std::string employee = "Joe";
        library(employee);
    } else if (pin == 6789) {
        std::cout << "Pin correct.";
        std::string employee = "Bob";
        library(employee);
    } else {
        std::cout << "Pin incorrect.";
    }
}

