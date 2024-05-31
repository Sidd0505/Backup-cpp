#include "header.h"
 
//Book class implementation
Book::Book() : bookNumber(0), bookName(""), price(0.0), authorName(""), numberOfCopiesInLibrary(0), numberOfCopiesIssued(0) {}
 //Book::Book(){}
void Book::accept() {
    std::cout << "Enter Book Number: ";
    std::cin >> bookNumber;
 
    std::cout << "Enter Book Name: ";
    std::cin>> bookName;
 
    std::cout << "Enter Price: ";
    std::cin >> price;
 
    std::cout << "Enter Author Name: ";
    std::cin>> authorName;           
 
    std::cout << "Enter Number of Copies in Library: ";
    std::cin >> numberOfCopiesInLibrary;
 
    std::cout << "Enter Number of Copies Issued: ";
    std::cin >> numberOfCopiesIssued;
 
    int categoryChoice;
    std::cout << "Select Category (0: FICTION, 1: BIOGRAPHY, 2: HISTORICAL, 3: ADVENTURE): ";
    std::cin >> categoryChoice;
    category = static_cast<BookCategory>(categoryChoice);        //this is to put category
}
 
void Book::display() const {
    std::cout << "Book Number: " << bookNumber << "\n";
    std::cout << "Book Name: " << bookName << "\n";
    std::cout << "Price: " << price << "\n";
    std::cout << "Author Name: " << authorName << "\n";
    std::cout << "Number of Copies in Library: " << numberOfCopiesInLibrary << "\n";
    std::cout << "Number of Copies Issued: " << numberOfCopiesIssued << "\n";
}
 
std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Book Number: " << book.bookNumber << "\n";
    os << "Book Name: " << book.bookName << "\n";
    os << "Price: " << book.price << "\n";
    os << "Author Name: " << book.authorName << "\n";
    os << "Number of Copies in Library: " << book.numberOfCopiesInLibrary << "\n";
    os << "Number of Copies Issued: " << book.numberOfCopiesIssued << "\n";
    return os;
}
 
// Library class implementation
Library::Library() : bookPtr(nullptr) {}
 
Library::Library(const Library& other) {
    // Shallow copy bookPtr as default
    bookPtr = other.bookPtr;
}
 
Library::~Library() {
    delete bookPtr;
}
 
Book* Library::operator->() const {
    return bookPtr;
}
 
Book& Library::operator*() const {
    return *bookPtr;
}
 
// Global function to calculate average price of Books in a category
void calculateAvg(const Book pile[], int size, BookCategory category) {
    double totalPrices = 0;
    int count = 0;
 
    for (int i = 0; i < size; ++i) {
        if (pile[i].category == category) {
            totalPrices += pile[i].price;
            count++;
        }
    }
 
    if (count > 0) {
        double avgPrice = totalPrices / count;
        std::cout << "Average price of Books in the category: " << avgPrice << std::endl;
    } else {
        std::cout << "No books found in the given category." << std::endl;
    }
}