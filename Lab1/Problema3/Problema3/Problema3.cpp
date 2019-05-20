// Problema3.cpp : generarea submultimilor unei multimi standard
//

#include "pch.h"
#include <iostream>
using namespace std;

int i, c[100], k, a[100][100];

void afisare(int c[], int a[100][100], int n)
{
	for (i = 1; i <= n; i++)
		if (c[i] == 1)
			cout << a[i] << ' ';
}

void submultimi(a, n)
{
	for (i = 1; i <= n; i++)
		c[i] = 1;
	afisare(c, a, n);
	do
	{
		k = n;
		while ((c[k] == 2) && (k > 0)) k--;
		if (k > 0)
		{
			c[k] = 2;
			for (i = k + 1; i <= n; i++)
				c[i] = 1;
			afisare(c, a, n);
		}
	} while (k > 0);
}

int main()
{
}