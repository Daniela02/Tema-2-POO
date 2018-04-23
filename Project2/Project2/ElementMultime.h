#pragma once
#include "ElementMultime.h"
#include <iostream>
using namespace std;

class ElementMultime
{
public:
	int x;
	ElementMultime();
	ElementMultime(int);
	ElementMultime(ElementMultime &);
	virtual ~ElementMultime(){}
	ElementMultime & operator = (const ElementMultime &);
	friend istream &operator >> (istream &, ElementMultime &);
	friend ostream &operator << (ostream &, ElementMultime &);
};

