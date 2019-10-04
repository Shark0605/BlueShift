#include "Headers.h"

void BlueShift()
{
	cout << "BlueShift is a simple, single user DMBS";
	cout << " with simplified syntax which is easy to learn";
	cout << "\nThis is the third version of BlueShift";
}

void keywords()
{
	cout << "keywords of BlueShift: \n";
	
	cout << "new - similar to create in MySQL";
	cout << " used to create new tables, rows, columns";
	cout << "\nkeywords of new - new col, new row";

	cout << "show - similar to select in MySQL";
	cout << " used to show data in the table, and search queries";
	cout << "\nkeywords of show - show table";

	cout << "close - similar to close in MySQL";
	cout << " closes the table, DOES NOT SAVE UNSAVED DATA";
}

void cmdsyntax()
{
	cout << "for creating columns:\n";
	cout << "new col <number of columns>\n";
	cout << "<col name> <col type(int/char)> <col size>";

	cout << "for seeing data/doing queries:\n";
	cout << "show table - for seeing whole table\n ";
	cout << "show <col name;> where <query>";
}

void credits()
{
	cout << "The Credits of making BlueShift go to:\n";
	cout << "Vedant, Vishwajeet and Chinmay";
}