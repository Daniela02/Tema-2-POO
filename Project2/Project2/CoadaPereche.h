#pragma once
#include "MultimePereche.h"
class CoadaPereche :
	public MultimePereche
{
private:
	int top;
public:
	CoadaPereche();
	CoadaPereche(CoadaPereche&);
	~CoadaPereche();
	istream &read(istream &in)
	{
		in >> top;
		return Multime::read(in);
	}
	ostream &print(ostream & out) const
	{
		return Multime::print(out);
	}
	CoadaPereche & operator = (const CoadaPereche &);
	friend istream &operator >> (istream &, CoadaPereche &);
	friend ostream &operator << (ostream &, const CoadaPereche &);
	void erase(int &, int);
	void add(int, int);
	int size();
	int Top();
	void ModificaTop(int);
};