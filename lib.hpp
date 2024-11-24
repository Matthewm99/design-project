#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef lib_hpp // Compiler directive that ensures that if code following ifndef is not already defined to include in compilation
#define lib_hpp // Compiler directive that ensures this file is compiled only once
#include "Book.hpp" // Includes declared book class in Book.hpp

// Library class
class Library{
    vector<Book> books; 
    public:
        // Empty library constructor
        Library();
        //Parameterized constructor with vector of books
        Library(vector<Book> inputted_books);
        void print();
        
        //INPUTS: Book class, book object
        //PURPOSE: insert a Book instance passed in by value. The provided values are stored as a new Book object inside the vector attribute
        //OUTPUTS: returns true if book was successfully added
        bool insert(Book book);
        
        // INPUTS: title, authors, date_of_publication
        // PURPOSE: insert a Book instance where the title, authors, and date of publication are provided as string values
        // OUTPUTS: returns true if book was successfully added
        bool insert(string title, string authors, string date_of_publication);
        
        //INPUTS: Book class, book object
        //PURPOSE: remove a Book instance where a Book instance is passed in by value
        //OUTPUTS: returns true if book was successfully removed
        bool remove(Book book);

        //INPUTS: title, authors, date_of_publication
        //PURPOSE: remove a Book instance where the title, authors, and date of publication are provided as string values
        //OUTPUTS: returns true if book was successfully removed
        bool remove(string title, string authors, string date_of_publication);
    };
#endif
