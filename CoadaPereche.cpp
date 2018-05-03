#include "CoadaPereche.h"
#include "MultimePereche.h"

CoadaPereche::CoadaPereche():MultimePereche()
{
	top = 0;
}
CoadaPereche::CoadaPereche(CoadaPereche&C) :MultimePereche(C){}
CoadaPereche::~CoadaPereche()
{
	top = 0;
}
CoadaPereche &CoadaPereche::operator = (const CoadaPereche &C)
{
	this->MultimePereche::operator=(C);
	return *this;
}
istream &operator >> (istream &in, CoadaPereche &C)
{
	return C.read(in);
}
ostream &operator << (ostream &out, const CoadaPereche &C)
{
	return C.print(out);
}
void CoadaPereche::erase(int &val, int poz)
{
	if (nr)
	{
		int i;
		val = m[1].x;
		for (i = 1; i < nr; i++)
		{
			m[i] = m[i + 1];
		}
		nr--;
	}
	else
		cout << "coada este goala\n";
}
void CoadaPereche::add(int val, int poz)
{
	if (nr < top)
	{
		nr++;
		m[nr] = val;
	}
	else
		cout << "coada este plina\n";
}
int CoadaPereche::size()
{
	return nr;
}
int CoadaPereche::Top()
{
	return top;
}
void CoadaPereche::ModificaTop(int val)
{
	if (top)
		delete[]m;
	top = val;
	m = new ElementMultime[top + 1];
}