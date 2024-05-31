#ifndef HEADER_H
#define HEADER_H
 
#include <iostream>
#include <string>
 
// Enum for Book category
enum class BookCategory { FICTION, BIOGRAPHY, HISTORICAL, ADVENTURE };
 
class Book {
public:
    // Data members
    int bookNumber;
    std::string bookName;
    double price;
    std::string authorName;
    int numberOfCopiesInLibrary;
    int numberOfCopiesIssued;
    BookCategory category;
 
    // Member functions
    Book();  // Constructor
    void accept();
    void display() const;
 
    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};
 
class Library {
private:
    Book* bookPtr;
 
public:
    Library();  // Default Constructor
    Library(const Library& other);  // Copy Constructor
    ~Library();  // Destructor
 
    Book* operator->() const;
    Book& operator*() const;
};
 
void calculateAvg(const Book pile[], int size, BookCategory category);
 
#endif 