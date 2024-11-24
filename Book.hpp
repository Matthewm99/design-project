#include <iostream>
#include <vector>
#include <string>

using namespace std;


#ifndef book_hpp 
#define book_hpp 

// PURPOSE: stores book title, authors, and date of publication
class Book{
    string title;
    string authors; 
    string date_of_publication;

    public:
        Book();
        Book(string new_title);
        Book(string new_title,  string new_authors); 
        Book(string new_title,  string new_authors,  string new_date_of_publication); 
       
        // Method declaration to print
        void print();
        
        // Operator overload to compare book titles, authors and date_of_publications currently in the library with attempted insertions
        bool operator==(const Book& other_book) const;

        // Getter method to return attributes of books
        string get_title();
        string get_authors();
        string get_date_of_publication();
    };
#endif
