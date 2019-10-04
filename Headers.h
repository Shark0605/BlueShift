#pragma once
#include "dynclass.h"
#include "authentification.h"
#include "creators_setters.h"
#include "help.h"
#include "resource.h"


int mainParser(col *[], int&, int&);
void tableParser(col *[], int&, int&);
void QandDParser(col *[], int, int);
void help();