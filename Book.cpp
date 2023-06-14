#include "Book.h"
#include <vector>
#include <iostream>
#include <string>
#include "strutils.h"

Book::Book()
{
    title = "";
    author = "";
    publicationYear = 0;
}

Book::Book(const string& mytitle, const string& myauthor, int mypublicationYear)
{
    title = mytitle;
    author = myauthor;
    publicationYear = mypublicationYear;
}

string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

int Book::getPublicationYear() const
{
    return publicationYear;
}

void Book::setTitle(const string& book_title)
{
    title = book_title;
}

void Book::setAuthor(const string& book_author)
{
    author = book_author;
}

void Book::setPublicationYear(int book_publicationYear)
{
    publicationYear = book_publicationYear;
}

string Book::getAuthorLastName() const // New function
{
    int idx = author.rfind(" ");
    return author.substr(idx+1);
}

void Book::display() const // New function
{
    cout << title << ", " << author << ", " << publicationYear << endl;
}


