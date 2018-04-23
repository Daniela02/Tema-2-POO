#include <iostream>
#include <fstream>
#include "ElementMultime.h"
#include "Pereche.h"
#include "Multime.h"
#include "MultimePereche.h"
#include "StivaPereche.h"
#include "CoadaPereche.h"
using namespace std;
ifstream f("dateIN.txt");
ofstream g("date.out");
StivaPereche S1, S2;
void AdaugaCoada(int val)
{
	int y;
	while (S2.size())
	{
		S2.erase(y, 1);
		S1.add(y, 1);
	}
	S1.add(val, 1);
}
void StergCoada()
{
	int val;
	while(S1.size())
	{
		S1.erase(val, 1);	
		S2.add(val, 1);		
	}
	S2.erase(val, 1);
}
void Coada()
{
	int x, n, val, top;
	f >> top;
	S1.ModificaTop(top);
	S2.ModificaTop(top);
	f >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
		f >> x;
		if (x == 1)
		{
			f >> val;
			AdaugaCoada(val);
		}
		else
			StergCoada();
	}
	if (S1.size())
		g << S1;
	else
		if (S2.size())
			g << S2;
		else
			g << "coada este goala";
}
int main()
{	
	Coada();
	Multime M;
	MultimePereche P;
	StivaPereche S;
	CoadaPereche C;
	f >> M >> P >> S >> C;
	g << M << P << S << C;
	f.close();
	g.close();
	return 0;
}
