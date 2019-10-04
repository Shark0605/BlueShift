#pragma once
#include <iostream>
#include <conio.h>
//#include <graphics.h>

using namespace std;

class col
{
private:
	//common attributes
	char name[10];
	int type;
	~col();
	//int column attributes
	int *dt;								//temp var
	int *dd;
	int isz;
	//char column attributes
	int csz;
	char *sd[100];
	char *sdt[100];							//temp var
public:
	//common functions
	col();
	void nameset(char[]);
	void typeset(char[]);
	void szset(int, int);
	int getType();
	friend void close(col *);
	//int column functions
	void newintgenerate(int);				//for first row only
	void intgenerate(int);
	void introwinput(int);
	//char column finctions
	void newchargenerate();					//for first row only
	void chargenerate(int);
	void charrowinput(int);
	void showdata(int, int);				//obsolete, delete when newer version available

};