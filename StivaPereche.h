#pragma once
#include "MultimePereche.h"
class StivaPereche :
	public MultimePereche
{
private:
	int top;	
public:
	StivaPereche();
	StivaPereche(StivaPereche &);
	~StivaPereche();
	istream &read(istream &in)
	{
		in >> top;
		return Multime ::read(in);
	}
	ostream &print(ostream & out) const
	{
		return Multime::print(out);
	}
	StivaPereche &operator = (const StivaPereche &);
	friend istream &operator >> (istream &, StivaPereche &);
	friend ostream &operator << (ostream &, const StivaPereche &);
	void erase(int &, int);
	void add(int, int);
	int size();
	int Top();
	void ModificaTop(int);
};