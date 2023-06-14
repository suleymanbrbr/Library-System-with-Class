#pragma once
// Book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
public:
    Book();
    Book(const string& title, const string& author, int publicationYear);

    string getTitle() const;
    string getAuthor() const;
    int getPublicationYear() const;

    void setTitle(const string& book_title);
    void setAuthor(const string& book_author);
    void setPublicationYear(int book_publicationYear);

    string getAuthorLastName() const; // New function
    void display() const;  // New function

private:
    string title;
    string author;
    int publicationYear;
};

#endif // BOOK_H
