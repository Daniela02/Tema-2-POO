#pragma once
#include "ElementMultime.h"
#include <iostream>
using namespace std;
class Multime
{	
protected:
	int nr;
	ElementMultime *m;
public:
	Multime();
	virtual ~Multime();
	Multime(Multime &);
	Multime & operator = (const Multime &);
	friend istream &operator >> (istream &, Multime &);
	friend ostream &operator << (ostream &, const Multime &);
	virtual istream &read(istream &in)
	{
		if (nr)	
		{
			delete[]m;
		}
		in >> nr;
		m = new ElementMultime[nr + 3];
		int i;
		for (i = 1; i <= nr; i++)
		{
			in >> m[i];
		}
		return in;
	}
	virtual ostream &print(ostream & out) const
	{
		int i;
		for (i = 1; i <= nr; i++)
		{
			out << m[i]<<" ";
		}
		out << '\n';
		return out;
	}
	virtual int size();
	virtual void erase(int &, int);
	virtual void add(int, int);
};

