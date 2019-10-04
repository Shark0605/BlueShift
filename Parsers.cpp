#include "dynclass.h"
#include "Headers.h"

int mainParser(col *s[], int& colsz, int& rowsz)
{
	char keywrd[6];

	cin >> keywrd;

	if (strcmp(keywrd, "new") == 0)
	{
		tableParser(s, colsz, rowsz);		//table, data creation, input chinmay
	}

	if (strcmp(keywrd, "show") == 0)
	{
		QandDParser(s, colsz, rowsz);
		//all queries vedant
	}

//	if (strcmp(keywrd, "update") == 0)
//	{
//		//vedant, partial rest
//	}
//
//	if (strcmp(keywrd, "save") == 0)
//	{
//		//save function vishwajeet
		//metadata function all
//	}

	if (strcmp(keywrd, "help") == 0)
	{
		help();
	}

	if (strcmp(keywrd, "close") == 0)
	{
		return tblClose(s, colsz);
	}

	return 0;
}

void tableParser(col *s[], int &colsz, int& rowsz)
{
	char lction[5];
	//int *idt;
	//char *cdt;

	cin >> lction;

	//if (strcmp(lction, "table") == 0)
	//{
	//	//table creator, name setter
	//}

	if (strcmp(lction, "col") == 0)
	{
		colcreator(s, colsz);				//column creator
		cout << '\n';
		colNameTypeSetter(s, colsz);		//column name, type set
		cout << '\n';
	}

	if (strcmp(lction, "row") == 0)
	{
		if (rowsz == 1)
		{
			newSrow(s, rowsz, colsz);		//Generating first row
		}
		else
		{
			newRow(s, rowsz, colsz);		//Generating the rest of rows
		}

		dataEntry(s, rowsz, colsz);			//data inputting
	//	tempshowdata(s, rowsz, colsz);
		rowsz++;
	}
}

void QandDParser(col *s[], int colsz, int rowsz)
{
	char lction[10];
	int rows = rowsz - 1;

	cin >> lction;

	if (strcmp(lction, "table") == 0)
	{
		tempshowdata(s, rows, colsz);
	}
}

void help()
{
	int ch;

	do
	{
		cout << "\t\tHELP\n";
		cout << "1. What is Blueshift?\n";
		cout << "2. Keywords\n";
		cout << "3. Command Syntax\n";
		cout << "4. Exit help\n";
		cout << "0. Credits\n";

		cin >> ch;

		switch (ch)
		{
		case 1:
			BlueShift();
			break;
		case 2:
			keywords();
			break;
		case 3:
			cmdsyntax();
			break;
		case 4:
			break;
		case 0:
			credits();
			break;
		default:
			cout << "Enter proper option: ";
			break;
		}
	} while (ch != 4);

}