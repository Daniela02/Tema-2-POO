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
	Pereche &operator = (const Pereche &);
	friend istream &operator >>(istream &, Pereche &);
	friend ostream &operator << (ostream &, Pereche &);
};

