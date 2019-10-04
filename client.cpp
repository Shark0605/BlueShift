#include "dynclass.h"
#include"Headers.h"



void main()
{
	int colsz, rowsz = 1;
	col *s[10];
	int cl = 0;

	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);

	//setColor(9, 0);

	cout << "PreBlueshift Phase 2\n";

	cl = authentification();

	if (cl == 1)
	{
		return;
	}

	do
	{
		cl = mainParser(s, colsz, rowsz);

	} while (cl != 1);

	_getch();
	return;
}