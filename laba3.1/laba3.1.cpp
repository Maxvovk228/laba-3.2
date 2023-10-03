#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;
	A = 1.0 / (abs(x + 2) + 1);

	    if (x < 1)
		B = 7*x*x + x - 8;
		else
			if (1 <= x && x <= 4)
		    B = ((x + 4)/ sqrt(11)) + 3;
			else
				if (x > 4)
		        B = sqrt( 1 + abs(cos(x) * cos(x) * cos(x) )) ;
	y = A - B;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}