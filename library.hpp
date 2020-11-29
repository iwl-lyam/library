#include <string>

// BOOKS
class Book {
    
    // Book properties

    std::string title;
    std::string description;
    std::string author;
    int pages;
    int id;
    bool checked_out;
    std::string lended_to;
    std::string duedate;
    
public:

    // Book register
    Book(std::string new_title, std::string new_description, std::string new_author, int new_pages, int new_id);
    
    // Get book details
    void get_book();

    // Book checkout
    void book_checkout(std::string lendee, std::string new_duedate);
    // Await book checkout
    void book_checkout();

    // Check if checked out
    bool is_checked_out();

};

// MOVIES
class Movie {

    // Movie properties

    std::string title;
    std::string description;
    std::string director;
    int minutes_long;
    int id;
    bool checked_out;
    std::string lended_to;
    std::string duedate;

    public:

        // Movie register
        Movie(std::string movie_title, std::string movie_description, std::string movie_director, int movie_length_in_minutes, int movie_id);

        // Get movie details
        void get_movie();

        // Movie checkout
        void movie_checkout(std::string viewer, std::string new_duedate);
        // Await movie checkout
        void movie_checkout();

        // Check if checked out
        bool is_checked_out();

};