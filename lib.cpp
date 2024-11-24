#include <iostream>
#include "lib.hpp" // Includes class declaration
using namespace std;

// Default empty library constructor
Library::Library() : books() {}

// Parameterized constructor with vector
Library::Library(vector<Book> inputted_books)
{
    books = inputted_books;
}

// Method definition for print
void Library::print()
{
    cout << books.size() << endl;
    for (int i = 0; i < books.size(); i++)
    {
        books[i].print();
        cout << endl;
    }
}

// If the size of the library is 0, a book is inserted. 
// After the size of the library is greater than 0, then the function continues to insert books,
// checking if they are duplicates and rejecting if so.
bool Library::insert(Book book)
{
 if (books.size() == 0)
    {
        books.push_back(book);
        return true;
    }
    else {
    for (int i = 0; i < books.size(); i++)
    {
        if ((books[i].get_title() == book.get_title()) && (books[i].get_authors() == book.get_authors()) && (books[i].get_date_of_publication() == book.get_date_of_publication()))
        {
            return false;
        }
    }
    books.push_back(book);
        return true;
}
}

// If the size of the library is 0, a book is inserted. 
// After the size of the library is greater than 0, then the function continues to insert books,
// checking if they are duplicates and rejecting if so.
bool Library::insert(string title, string authors, string date_of_publication)
{
    Book book(title, authors, date_of_publication);
    if (books.size() == 0)
    {
        books.push_back(book);
        return true;
    }
    else {
    for (int i = 0; i < books.size(); i++)
    {
        if ((books[i].get_title() == book.get_title()) && (books[i].get_authors() == book.get_authors()) && (books[i].get_date_of_publication() == book.get_date_of_publication()))
        {
            return false;
        }
    }
    books.push_back(book);
        return true;
}
}

// Searches through the vector attribute and removes the Book instance that matches the entered values. 
// If an instance is found and removed, true is returned; else, false is returned.
bool Library::remove(Book book)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (book == books[i])
        {
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}

// Searches through the vector attribute and removes the Book instance that matches the entered values. 
// If an instance is found and removed, true is returned; else, false is returned.
bool Library::remove(string title, string authors, string date_of_publication)
{
    Book book(title, authors, date_of_publication);
    for (int i = 0; i < books.size(); i++)
    {
        if (book == books[i])
        {
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}
