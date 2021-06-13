#include <iostream>
using namespace std;


void printmatrix(int**, int, int);
void writematrix(int**, int, int);
void writenumbernonzerostrok(int**, int, int);


int main()
{
	int stroka;
	int stolb;
	cout << "Write number of strok :";
	cin >> stroka;
	cout << "Write number of stolb :";
	cin >> stolb;
	int** massiv = new int* [stroka];
	
	writematrix(massiv, stroka, stolb);
	printmatrix(massiv, stroka, stolb);
	writenumbernonzerostrok(massiv, stroka, stolb);
	int buff;
	int str;
	int stol;
	cout << "write stolb";
	cin >> str;
	cout << "write stolb";
	cin >> stol;
	for (int i = 0; i < stroka; i++)
	{
		buff = massiv[i][str - 1];
		massiv[i][str - 1] = massiv[i][stol - 1];
		massiv[i][stol - 1] = buff;
	}
	for (int i = 0;i < stroka;i++)
	{
		for (int j = 0;j < stolb;j++)
		{
			cout << massiv[i][j];
			
		}
		cout << endl;
	}

}



//Вывод матрицы

void printmatrix(int** massiv, int stroka, int stolb)
{
	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			cout << " " << massiv[i][j];
		}
		cout << endl;
	}
}



//Ввод элементов матрицы

void writematrix(int** massiv, int stroka, int stolb)
{
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
}

//Колличество ненулевых строк

void writenumbernonzerostrok(int** massiv, int stroka, int stolb)
{
	int count = 0;
	int x=0;
	for (int i = 0;i < stroka;i++)
	{
		x = 0;

		for (int j = 0;j < stolb;j++)
		{
			if (massiv[i][j] == 0)
			{
				x++;
			}
		}
		if (x == 0)
		{
			count++;
		}
	}
	cout <<"Number nonzero strok of matrix : "<< count;

}
