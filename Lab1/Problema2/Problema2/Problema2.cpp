// Problema2.cpp : generarea produsului cartezian pentru mult ̧imi oarecare.
//

#include "pch.h"
#include <iostream>
using namespace std;

int c[100], k, i, m[100], a[100][100];

void afisare(int c[],int a[100][100], int n)
{
	for (i = 1; i <= n; i++)
		cout << a[i][c[i]] << ' ';
	cout << endl;
}

void produs_cartezian(int n, int m[])
{
	for (i = 1; i <= n; i++)
		c[i] = 1;

	afisare(c, a, n);

	do
	{
		k = n;
		while ((c[k] == m[k]) && (k > 0))
			k--;
		if (k > 0)
		{
			c[k]++;
			for (i = k + 1; i <= n; i++)
				c[i] = 1;
			afisare(c, a, n);
		}
	} while (k > 0);

}

void solutie()
{
	int n;
	cout << "Introduceti numarul de multimi:";
	cin >> n;
	int nr = n, nre;
	while (nr)
	{
		cout << "Introduceti numarul de elemente al multimii:";
		cin >> nre;
		for (i = 1; i <= nre; i++)
		{
			cin >> m[i];
		}
		nr--;
	}
	produs_cartezian(n, m);

	
}
int main()
{
	solutie();
}