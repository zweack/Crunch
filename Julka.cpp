#include <iostream>
#include <cstring>
using namespace std;
void sub(int z[], int a[], int b[], int l)
{
}

int main()
{

	long i, l, m, j;
	for (i = 0; i < 10; i++)
	{
		char x[102], y[102];
		cin >> x >> y;
		l = strlen(x);
		m = strlen(y);
		int a[l], b[l], z[l], w[l], d[l];
		for (j = 0; j < l; j++)
		{
			a[j] = 0;
			b[j] = 0;
			z[j] = 0;
			w[j] = 0;
		}
		for (j = 0; j < l; j++)
		{
			a[j] = x[j] - '0';
			d[j] = a[j];
		}
		int k = m - 1;
		for (j = l - 1; j >= l - m; j--)
		{
			b[j] = y[k] - '0';
			k--;
		}
		for (j = l - 1; j >= 0; j--)
		{
			if (a[j] >= b[j])
				z[j] = a[j] - b[j];
			else
			{

				z[j] = a[j] - b[j] + 10;
				if (a[j - 1] != 0)
					a[j - 1]--;
				else
					a[j - 1] = 9;
			}
		}

		for (j = 0; j < l; j++)
		{
			z[j + 1] = ((z[j] % 2) * 10) + z[j + 1];
			z[j] /= 2;
		}

		for (j = l - 1; j >= 0; j--)
		{
			if (d[j] >= z[j])
				w[j] = d[j] - z[j];
			else
			{
				w[j] = d[j] - z[j] + 10;
				if (d[j - 1] == 0)
					d[j - 1] = 9;
				else
					d[j - 1]--;
			}
		}
		j = 0;
		while (w[j] == 0)
			j++;
		for (; j < l; j++)
			cout << w[j];
		cout << endl;
		j = 0;
		while (z[j] == 0)
			j++;
		for (; j < l; j++)
			cout << z[j];

		cout << endl;
	}

	return 0;
}
