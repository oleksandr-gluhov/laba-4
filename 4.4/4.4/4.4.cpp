#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y,R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if ((x <= (-7 - R)) || (((-7 + R) <= x) && (x <= (-4))))
		{
			y = R;
		}
		if ((-7 - R < x) && (x < -4))
		{
			y = (-1 * sqrt((R * R) - (x * x) - (14 * x) - 49)) + R;
		}
		if ((-4 < x) && (x < 0))
		{
			y = (-1 * (R / 4)) * x;
		}
		if ((0 <= x) && x <= (M_PI))
		{
			y = sin(x);
		}
		if (M_PI < x)
		{
			y = x - M_PI;
		}
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}