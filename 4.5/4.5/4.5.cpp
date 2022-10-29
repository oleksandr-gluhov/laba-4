#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;

		if ((0 <= x && x <= R) && y < 0 && y < sqrt((x * x) - 2 * x * R) + R ||
			((0 <= x && x <= R) && ((0 <= y && y <= R))) ||
			(-1 * R <= x && x <= 0) && y>0 && y < -1 * sqrt((x * x) - 2 * x * R) + R ||
			((-1 * R <= x && x <= 0) && ((-1 * R <= y && y <= 0)))
			)
		{
			cout << "Yes" << endl;

		}
		else {
			cout << "no" << endl;
		}
	}
	cout << endl << fixed;
	

	for (int i = 0; i < 10; i++)
	{
		R = 12. * rand() / RAND_MAX - 6;
		x = 3 * rand() / RAND_MAX - (R);
		y = 3 * rand() / RAND_MAX - (R);
		
		if (
			(0 <= x && x <= R) && y < 0 && y < sqrt((x * x) - 2 * x * R) + R ||
			((0 <= x && x <= R) && ((0 <= y && y <= R))) ||
			(-1 * R <= x && x <= 0) && y>0 && y < -1 * sqrt((x * x) - 2 * x * R) + R ||
			((-1 * R <= x && x <= 0) && ((-1 * R <= y && y <= 0)))
			) {
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << setw(8) << setprecision(4) << R << " " << "yes" << endl;
		}
		else {
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " "
				<< setw(8) << setprecision(4) << R << " " << "no" << endl;
		}
	}
	return 0;
}
