#include "MultimePereche.h"
#include "Multime.h"


MultimePereche::MultimePereche() : Multime()
{
	nr = 0;
}
MultimePereche::~MultimePereche() 
{
	nr = 0;
}
MultimePereche::MultimePereche(MultimePereche &P) : Multime(P){}
MultimePereche & MultimePereche:: operator = (const MultimePereche &P)
{
	this->Multime::operator=(P);
	return *this;
}
istream &operator >> (istream &in, MultimePereche &P)
{
	if (P.nr)
	{
		delete[]P.m;
	}
	in >> P.nr;
	P.m = new Pereche[P.nr + 3];
	int i;
	for (i = 1; i <= P.nr; i++)
	{
		in >> P.m[i];
	}
	return in;
}
ostream &operator << (ostream &out, MultimePereche &P)
{
	out << P.nr << '\nr';
	int i;
	for (i = 1; i <= P.nr; i++)
	{
		out << P.m[i];
	}
	return out;
}
