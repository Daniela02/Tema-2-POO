#include "ElementMultime.h"
#include <iostream>
using namespace std;

ElementMultime::ElementMultime()
{
	x = 0;
}
ElementMultime::ElementMultime(int a)
{
	x = a;
}
ElementMultime::ElementMultime(ElementMultime &E)
{
	x = E.x;
}
ElementMultime & ElementMultime:: operator = (const ElementMultime &E)
{
	x = E.x;
	return *this;
}
istream &operator >> (istream &in, ElementMultime &E)
{
	in >> E.x;
	return in;
}
ostream &operator << (ostream &out, ElementMultime &E)
{
	out << E.x << " ";
	return out;
}
