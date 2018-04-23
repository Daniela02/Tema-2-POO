#include "Pereche.h"
#include <iostream>
#include "ElementMultime.h"
using namespace std;

Pereche::Pereche() : ElementMultime()
{
	 y = 0;
}
Pereche::Pereche(int a, int b) : ElementMultime(a)
{
	y = b;
}
Pereche::Pereche(Pereche&P) : ElementMultime(P.x)
{
	y = P.y;
}
Pereche & Pereche:: operator = (const Pereche &P)
{
	x = P.x;
	y = P.y;
	return *this;
}
istream &operator >>(istream &in, Pereche &P)
{
	in >> P.x >> P.y;
	return in;
}
ostream &operator << (ostream &out, Pereche &P)
{
	out <<P.x << " " << P.y << '\n';
	return out;
}
