#include "library.hpp"
#include <iostream>

// Book behind-the-scenes

Book::Book(std::string new_title, std::string new_description, std::string new_author, int new_pages, int new_id) {
  title = new_title;
  description = new_description;
  author = new_author;
  pages = new_pages;
  id = new_id;
  checked_out = false;
  lended_to = "No-one, available for checkout";
  duedate = "N/A";
  std::cout << "\nBOOK: " << title << "\n";
}

void Book::get_book() {
    std::cout << "\nBook name: " <<title<<"; Description: "<<description<<"; Written by: "<<author<<"; ID: "<<id<<"; Lended to: "<<lended_to<<"; Due back: "<<duedate<<"; Length: "<<pages<<" pages.\n"; 
}

void Book::book_checkout(std::string lendee, std::string new_duedate) {
    checked_out = true;
    lended_to = lendee;
    duedate = new_duedate;
    std::cout << "\nCHECKOUT NOTICE: " << title << " checked out to " << lendee << " due back on " << duedate << "\n";
}

void Book::book_checkout() {
    checked_out = false;
    lended_to = "No-one, available for checkout";
}


bool Book::is_checked_out() {
    if (checked_out) {
        return true;
    } else {
        return false;
    }
}

// Movie behind-the-scenes

Movie::Movie(std::string movie_title, std::string movie_description, std::string movie_director, int movie_length_in_minutes, int movie_id) {
    title = movie_title;
    description = movie_description;
    director = movie_director;
    minutes_long = movie_length_in_minutes;
    id = movie_id;
    checked_out = false;
    lended_to = "No-one, available for checkout";
    duedate = "N/A";
    std::cout << "\nMOVIE: " << title << "\n";
}

void Movie::get_movie() {
    std::cout << "\nMovie name: " <<title<<"; Description: "<<description<<"; Directed by: "<<director<<"; ID: "<<id<<"; Lended to: "<<lended_to<<"; Due back: "<<duedate<<"; Length: "<<minutes_long<<" mins.\n";
}

void Movie::movie_checkout(std::string lendee, std::string new_duedate) {
    if (!checked_out) { 
    checked_out = true;
    lended_to = lendee;
    duedate = new_duedate;
    std::cout << "\nCHECKOUT NOTICE: " << title << " checked out to " << lendee << " due back on " << duedate << "\n";
    } else {
        std::cout << "\nCHECKOUT NOTICE: " << title << " has already been checked out!\n";
    }
}

void Movie::movie_checkout() {
    checked_out = false;
    lended_to = "No-one, available for checkout";
}

bool Movie::is_checked_out() {
    if (checked_out) {
        return true;
    } else {
        return false;
    }
}