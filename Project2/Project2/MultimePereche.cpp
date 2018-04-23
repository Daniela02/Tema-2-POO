#include "MultimePereche.h"
#include "Multime.h"


MultimePereche::MultimePereche() : Multime()
{
	n = 0;
}
MultimePereche::~MultimePereche() 
{
	n = 0;
	nr = 0;
	delete[]p;
}
MultimePereche::MultimePereche(MultimePereche &P) 
{
	if(this != &P)
	{
		if(n)
		{
			n = 0;
			delete[]p;
		}
		n = P.n;
		int i;
		p = new Pereche[n + 3];
		for (i = 1; i <= n; i++)
		{
			p[i] = P.p[i];		
		}
	}
}
MultimePereche & MultimePereche:: operator = (const MultimePereche &P)
{
	if (this != &P)
	{
		if (n)
		{
			n = 0;
			delete[]p;
		}
		n = P.n;
		int i;
		p = new Pereche[n + 3];
		for (i = 1; i <= n; i++)
		{
			p[i] = P.p[i];
		}
	}
	return *this;
}
istream &operator >> (istream &in, MultimePereche &P)
{
	if (P.n)
	{
		delete[]P.p;
	}
	in >> P.n;
	P.p = new Pereche[P.n + 3];
	int i;
	for (i = 1; i <= P.n; i++)
	{
		in >> P.p[i];
	}
	return in;
}
ostream &operator << (ostream &out, MultimePereche &P)
{
	out << P.n << '\n';
	int i;
	for (i = 1; i <= P.n; i++)
	{
		out << P.p[i];
	}
	return out;
}
