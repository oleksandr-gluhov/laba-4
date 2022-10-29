#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i ,k;
	P = 1;
	i = 1;
	while (i <= 15)

	{
		S = 0;
		k = 1;
		while (k <=i)

		{
			P *=sqrt(k);
			k++;

		}
		S += sin(10*i)*cos(10*i) / (P);
		i++;

	}
	cout << P << endl;
	P = 1;
	i = 1;
	do
	{
		S = 0;
		k = 1;
		do
		{
			P *= sqrt(k);
			k++;
		} while (k <= i);
		S += sin(10 * i) * cos(10 * i) / (P);
		i++;
	} while (i <= 15);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 15; i++)

	{
		S = 0;
		for (k = 1; k <= i; k++)

		{
			P *= sqrt(k);

		}
		S += sin(10 * i) * cos(10 * i) / (P);

	}
	cout << P << endl;
	P = 1;
	for (i = 15; i >= 1; i--)

	{
		S = 0;
		for (k = i; k >= 1; k--)

		{
			P *= sqrt(k);
			
		}
		S += sin(10 * i) * cos(10 * i) / (P);
	}
	cout << P << endl;
	return 0;
}
