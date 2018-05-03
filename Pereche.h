#pragma once
#include <iostream>
#include "ElementMultime.h"
using namespace std;
class Pereche: public ElementMultime
{
public:
	int y;
	Pereche();
	Pereche(int, int);
	Pereche(Pereche&);
	virtual ~Pereche(){}
	istream &read(istream &in)
	{
		in >> y;
		return ElementMultime::read(in);
	}
	ostream &print(ostream &out)const
	{
		out << y << " ";
		return ElementMultime::print(out) << "\n";
	}
	Pereche &operator = (const Pereche &);
	friend istream &operator >>(istream &, Pereche &);
	friend ostream &operator << (ostream &, Pereche &);
};

