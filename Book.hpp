// Farhana Sultana 
// farhana.sultana79@myhunter.cuny.edu
// Csci 235
// project 1

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string title;
	string author;
	int pageCount;
	bool digital;
public:
	//Default Constructor
	Book();
	//Overloaded Constructor
	Book(string, string, int, bool = false);
	//Mutators
	void setTitle(string);
	void setAuthor(string);
	void setPageCount(int);
	void setDigital();
	//Accessors
	string getTitle() const;
	string getAuthor() const;
	int getPageCount() const;
	bool isDigital() const;
};
#endif BOOK_H