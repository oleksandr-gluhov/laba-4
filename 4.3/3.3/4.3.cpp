#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, y, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "----------" << endl;
	cout << "|" << setw(4) << "F" << "    |"<< endl;
	cout << "----------" << endl;
	x = xp;
	while (x <= xk)
	{
		
		if (x < 0 && c!=0)
			F = a*(x*x)+b*x+c;
		else
			if (x > 0 && c == 0)
				F = (-1 * a)/(x-c);
			else
				F = a*(x+c);
		
		cout << "|" << setw(7) << setprecision(2) << F << " |" << endl;
		x += dx;
	}
	cout << "----------" << endl;
	return 0;
}