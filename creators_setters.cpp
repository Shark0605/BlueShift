#include "dynclass.h"
#include "Headers.h"

void colcreator(col *s[], int &n)
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		s[i] = new col;
	}

	cout << "\nColumns created";
}

void colNameTypeSetter(col *s[], int& n)
{
	char *name;
	char *type;
	int sz;

	name = new char[10];
	type = new char[10];

	for (int i = 0; i < n; i++)
	{
		cin >> name >> type >> sz;
		s[i]->nameset(name);
		s[i]->typeset(type);
		s[i]->szset(sz, s[i]->getType());
		cout << '\n';
	}

	delete[] name;
	delete[] type;
}

void newSrow(col *s[], int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		if (s[i]->getType() == 1)
		{
			s[i]->newintgenerate(n);
		}
		else
		{
			s[i]->newchargenerate();
		}
	}
	cout << "\nNewest row created\n";
}

void newRow(col* s[], int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		if (s[i]->getType() == 1)
		{
			s[i]->intgenerate(n);
		}
		else
		{
			s[i]->chargenerate(n);
		}
	}
	cout << "\nRow created\n";
}

void dataEntry(col *s[], int n, int c)
{
	int ar = n - 1;

	for (int i = 0; i < c; i++)
	{
		if (s[i]->getType() == 1)
		{
			s[i]->introwinput(ar);
		}
		else
		{
			s[i]->charrowinput(ar);
		}
	}

}

void tempshowdata(col *s[], int r, int c)
{
	cout << "\n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			s[j]->showdata(s[j]->getType(), i);
		}

		cout << "\n";
	}
}

int tblClose(col *s[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		close(s[i]);
	}

	return 1;
}