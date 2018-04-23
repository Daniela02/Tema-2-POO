#include "Multime.h"
#include "ElementMultime.h"
#include <iostream>
using namespace std;


Multime::Multime()
{
	nr = 0;
}
Multime::~Multime()
{
	nr = 0;
	delete []m;
}
Multime::Multime(Multime &M)
{
	if (this != &M)
	{
		if (nr)	
		{
			nr = 0;
			delete[]m;
		}
		nr = M.nr;
		int i;
		m = new ElementMultime[nr + 3];
		for (i = 1; i <= nr; i++)
		{
			m[i] = M.m[i];
		}
	}
}
Multime & Multime::operator = (const Multime &M)
{
	if (this != &M)
	{
		if (nr)	
		{
			nr = 0;
			delete[]m;
		}
		nr = M.nr;
		int i;
		m = new ElementMultime[nr + 3];
		for (i = 1; i <= nr; i++)
		{
			m[i] = M.m[i];
		}
	}
	return *this;
}
istream &operator >> (istream &in, Multime &M) 
{
	return M.read(in);
}
ostream &operator << (ostream &out,const Multime &M)
{
	return M.print(out);
}
int Multime::size()
{
	return nr;
}
void Multime::erase(int &val, int poz)
{
	int i;
	val = m[poz].x;
	for (i = poz; i < nr; i++)
	{
		m[i] = m[i + 1];
	}
	nr--;
}
void  Multime::add(int val, int poz)
{
	nr++;
	int i;
	for (i = nr; i >= poz; i--)
	{
		m[i] = m[i - 1];
	}
	m[i + 1] = val;
}