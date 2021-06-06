#include <iostream>
#include <math.h>
using namespace std;
const double e = 2.71828;





double main()
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
		z = pow(pow(e, (x - 1) / atan(x)), 1 / 3) + tan(x) * tan(x) + log(x) + 6;
	}
	else if ((x > a && x < b))
	{
		z = pow((asin(x) + sinh(x)), (cos(x) + x * x + e));
	}
	else (x >= b)
	{
		z = pow(fabs(pow(x, 1.3 / x) - log10(1 + x)), 1.3 + x * x) + pow(x, 5) + x;

	}
	cout << "z = " << z;
	return 1.0



}


