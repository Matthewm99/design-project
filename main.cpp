#include "lib.hpp"
#include "Book.hpp"
#include <iostream>
#include <vector>
using namespace std;

/* 
Student Name: Matthew Ng
Student Number: 21158005

SYDE 121 Lab Assignment 2
Filename: matthewng_21158005_lab_assignment2.zip

I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. 
This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.

Project: Book Library Class
Purpose: Implement 1. The class Book that stores information about individual books, and 
2. The class Library that contains a vector of Book instances.

*/

int main() {

    // Book cases with all three inputs
    Book book1("Born A Crime", "Trevor Noah", "November 15, 2016");
    Book book2("One Of Us Is Lying", "Karen M. McManus");
    Book book3("Diary of A Wimpy Kid");
    Book book4;
    Book book5("The Hunger Games");

    // Printing book details
    cout << "Book 1: \n";
    book1.print();
    cout << "\nBook 2: \n";
    book2.print();
    cout << "\nBook 3: \n";
    book3.print();
    cout << "\nBook 4: \n";
    book4.print();

    // Test cases
    Library books;
    cout << endl;
    // Insert all of the books (except for book2) using both insert methods
    books.insert("Born A Crime", "Trevor Noah", "November 15, 2016");
    books.insert(book3);
    books.insert(book4);
    
    // Further testing with special cases
    cout << "Is the duplicate accepted? (0 for no, 1 for yes): " <<  books.insert("Diary of A Wimpy Kid", "N/A", "N/A") << endl; // Check to see if duplicates are inserted
    cout << "Is the new book accepted? (0 for no, 1 for yes): " <<  books.insert(book5) << endl;
    cout << endl;
    books.remove(book2); // Remove a book that was never inserted
    books.remove("Born A Crime", "Trevor Noah", "November 15, 2016"); // Remove book1, so book1 should not appear
    books.print();

    // Create second library for testing
    vector<Book> book_vector {book1, book2, book3};
    Library books2(book_vector);
    cout << "Second Library" << endl;
    books2.print();

    return 0;
 
}
