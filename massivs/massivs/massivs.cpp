#include <iostream>
using namespace std;

int main()
{
	int stroka;
	int stolb;
	cout << "Write number of strok :";
	cin >> stroka;
	cout << "Write number of stolb :";
	cin >> stolb;
	int** massiv = new int* [stroka];
	for (int i = 0;i < stroka;i++)
	{
		massiv[i] = new int[stolb];
	}
	for (int i = 0;i < stroka; i++)
	{
		for (int j = 0;j < stolb;j++)
		{
			cout << "write element :";
			cin >> massiv[i][j];
		}
	}
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			cout << " " << massiv[i][j];
		}
		cout << endl;
	}


	//Нахождение строки матрицы с минимальным элементов


	int min = massiv[0][0];
	int numbstring = 0;

	for (int i = 0;i < stroka;i++)

		for (int j = 0;j < stolb;j++)
		{
			if (massiv[i][j] < min)
			{
				min = massiv[i][j];
				numbstring = i + 1;
			}

		}
	cout << numbstring;

	//--------------------------------------------------------------------//

	int stroka1;
	int stolb1;
	stroka1 = stroka;
	stolb1 = stolb;
	int** massiv1 = new int* [stroka1];
	for (int i = 0;i < stroka1;i++)
	{
		massiv1[i] = new int[stolb1];
	}
	
	int n1;//Строки которые
	
	int n2;//надо поменять
	cout << "Write string";
	cin >> n1;
	cout << "Write string";
	cin >> n2;
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0;j < stolb;j++)
		{
			if (j = n1)
			{
				j = n2;

			}
			else if (j = n2)
			{
				j = n1;
			}
			massiv1[i][j] = massiv[i][j];
		}
	
	}




	for (int i = 0; i < stroka1; i++)
	{
		for (int j = 0; j < stolb1; j++)
		{
			cout << " " << massiv1[i][j];
		}
		cout << endl;
	}
}
 
