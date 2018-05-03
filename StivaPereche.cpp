#include "StivaPereche.h"
#include "MultimePereche.h"

StivaPereche::StivaPereche():MultimePereche()
{
	top = 0;
}
StivaPereche::StivaPereche(StivaPereche &S):MultimePereche(S){}
StivaPereche::~StivaPereche()
{
	top = 0; 
}
StivaPereche &StivaPereche :: operator = (const StivaPereche &S)
{
	this->MultimePereche::operator=(S);
	return *this;
}
istream &operator >> (istream &in, StivaPereche &S)
{
	return S.read(in);
}
ostream &operator << (ostream &out, const StivaPereche &S)
{
	return S.print(out);
}
void StivaPereche::erase(int &val, int poz)
{
	if (nr)
	{
		val = m[nr].x;
		nr--;
	}
	else
		cout << "stiva este goala\n";
}
void StivaPereche::add(int val, int poz)
{
	if (nr < top)
	{
		nr++; 
		m[nr].x = val;
	}
	else
		cout << "stiva este plina\n";
}
int StivaPereche::size()
{
	return nr;
}
int StivaPereche ::Top()
{
	return top;
}
void StivaPereche::ModificaTop(int val)
{
	if (top)
		delete[]m;
	top = val;
	m = new ElementMultime[top + 1];
}