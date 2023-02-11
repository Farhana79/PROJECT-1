// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1


#include "Book.hpp"

//Default Constructor
Book::Book()
{
	title = "";
	author = "";
	pageCount = 0;
	digital = false;
}
//Overloaded Constructor
Book::Book(string bookTitle, string authorName, int count, bool digitalValue)
{
	title = bookTitle;
	author = authorName;
	pageCount = count;
	digital = digitalValue;
}
//Mutator
// sets the Book's title to the value of the parameter
void Book::setTitle(string bookTitle)
{
	title = bookTitle;
}
//Mutator
// sets the Book's author to the value of the parameter
void Book::setAuthor(string authorName)
{
	author = authorName;
}
//Mutator
// sets the page count to the value of the parameter
void Book::setPageCount(int count)
{
	if (pageCount > 0)
		pageCount = count;
	else
	{
		cout << "Page count can not be negative!!";
		//to halt the program!
		exit(0);
	}
}
//Mutator
// sets the digital flag to true
void Book::setDigital()
{
	digital = true;
}
//Accessor
// return the title of the Book
string Book::getTitle() const
{
	return title;
}
//Accessor
// return the author of the Book
string Book::getAuthor() const
{
	return author;
}
//Accessor
// return the page count
int Book::getPageCount() const
{
	return pageCount;
}
//Accessor
// return true if the book is available in digital form, false otherwise
bool Book::isDigital() const
{
	return digital;
}