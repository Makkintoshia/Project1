#include <iostream>
#include <math.h>
using namespace std;

const double e = 2.71828;


main()
{
	double a;
	double b;
	double x;
	double z;


	//Ввод переменных с консоли

	cout << "Write a";
	cin >> a;
	cout << "Write b";
	cin >> b;
	cout << "Write x";
	cin >> x;

	//Вычесление z

	if (x <= a)
	{
		z = pow(e, x) / (sqrt(sinh(x)) + 8.9 * x + 9);
	}
	else if ((x > a && x < b))
	{
		z = pow(cos(x) * cos(x) + 1.1 * tan(x), 2.1);
	}
	else (x >= b)
	{
		z = fabs(log(x) + pow(cos(x), 2.4) - 1.2 * x) * pow(x, 4.8);

	}
	cout << "z = " << z;
	return 0
}