#pragma once
#include "Multime.h"
#include "Pereche.h"
class MultimePereche :
	public Multime
{
protected:
	int n;
	Pereche *p;
public:
	MultimePereche();
	virtual ~MultimePereche();
	MultimePereche(MultimePereche &);
	MultimePereche &operator = (const MultimePereche &);
	friend istream &operator >> (istream &, MultimePereche &);
	friend ostream &operator << (ostream &, MultimePereche &);
};

