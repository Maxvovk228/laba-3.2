#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
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