#include "dynclass.h"
#include "Headers.h"



col::col()
{
	cout << "\ncolumn created";
}

void col::nameset(char nm[])
{
	strcpy_s(name, nm);
	cout << "\nObject name: " << name;
}

void col::typeset(char t[])
{
	if (strcmp(t, "int") == 0)
	{
		type = 1;							//int var
	}
	else
	{
		type = 2;							//string var
	}

	cout << "\nObject type: " << type;

}

void col::szset(int sz, int t)
{
	if (t == 1)
	{
		isz = sz;
	}
	else
	{
		csz = sz;
	}
}

int col::getType()
{
	return type;
}

void col::newintgenerate(int n)
{
	dd = new int[n];
}

void col::newchargenerate()
{
	sd[0] = new char[csz];
}

void col::chargenerate(int n)
{
	for (int i = 0; i < (n-1); i++)
	{
		sdt[i] = new char[csz];
	}

	//memcpy_s(sdt, sizeof(char)*n*csz, sd, sizeof(char)*n*csz);

	for (int i = 0; i < (n-1); i++)
	{
		for (int j = 0; j < csz; j++)
		{
			sdt[i][j] = sd[i][j];
		}
	}

	for (int i = 0; i < (n-1); i++)
	{
		delete[] sd[i];
	}
	

	for (int i = 0; i < n; i++)
	{
		sd[i] = new char[csz];
	}

	for (int i = 0; i < (n - 1); i++)
	{
		for (int j = 0; j < csz; j++)
		{
			sd[i][j] = sdt[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		delete[] sdt[i];
	}

	cout << "\nbox created";
}

void col::intgenerate(int n)
{
	dt = new int[n - 1];

	for (int i = 0; i < n; i++)
	{
		dt[i] = dd[i];
	}

	delete[] dd;

	dd = new int[n];

	for (int i = 0; i < (n - 1); i++)
	{
		dd[i] = dt[i];
	}

	delete[] dt;

	cout << "\nbox created";
}

void col::introwinput(int n)
{
	int data;

	//do
	//{
		cin >> data;
//	} while (!isdigit(data));

	dd[n] = data;
	cout << "\nData entered!";
}

void col::charrowinput(int n)
{
	cin >> sd[n];
}

void col::showdata(int t, int r)
{
	if (t == 1)
	{
		cout << dd[r] << " ";
	}
	else
	{
		cout << sd[r] << " ";
	}
}

col::~col()
{
	cout << "\nDestroyed";
}

void close(col *c)
{
	cout << "\nDestroying...";
	delete c;
}