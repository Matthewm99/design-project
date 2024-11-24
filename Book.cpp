#include <iostream>
#include "Book.hpp" // Includes class declaration
using namespace std;

        // Parameterized constructor for empty constructor
        Book::Book() : title("N/A"), authors("N/A"), date_of_publication("N/A"){}

        // Parameterized constructor with title, authors and date of publication
        Book::Book(string new_title, string new_authors, string new_date_of_publication) : 
            title(new_title), authors(new_authors), date_of_publication(new_date_of_publication){
            }

        // Parameterized constructor with title and authors
        Book::Book(string new_title, string new_authors) :
            title(new_title), authors(new_authors), date_of_publication("N/A"){
            }

        // Parameterized constructor with just title
        Book::Book(string new_title) : 
            title(new_title), authors("N/A"), date_of_publication("N/A"){
            }

    // Method definition for print
    void Book::print(){
        cout << "Title: " << title << endl;
        cout << "Authors: " << authors << endl;
        cout << "Date Of Publication: " << date_of_publication << endl;
        }

    // Operator overload to compare book titles, authors and date_of_publications currently in the library with attempted insertions
    bool Book::operator==(const Book& book) const {
            bool is_equal;
            is_equal = (title == book.title) && (authors == book.authors) && (date_of_publication == book.date_of_publication);
            return is_equal;
    }
    
    // Getter method to return title
    string Book::get_title(){
        return title;
    }

    // Getter method to return authors
    string Book::get_authors(){
        return authors;
    }

    // Getter method to return date_of_publication
    string Book::get_date_of_publication(){
        return date_of_publication;
    }
