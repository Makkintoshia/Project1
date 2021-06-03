#include <iostream>
using namespace std;


// Блок прототипов функций

int factorial(int);
void printfactorial(int);
int writefactorial(int);

void multiplymassiv(int[], int&);
void printmassiv(int []);
void writemassiv(int);


int main()
{
    int n = 0;
    int y = 0;
    n = writefactorial(y);
    int x = factorial(n);
    printfactorial(x);

    int massiv[10];
    writemassiv (massiv[10]);
    int result = 0;

    multiplymassiv(massiv, result);

    printmassiv(result);
    return 0;
}



//Ввод факториала с консоли

int writefactorial(int y)
{
    
    cin >> y;
    return y;
}


//Вычесление факториала
int factorial(int n)
{
    int res = 1;

    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            res = res * i;
        }

    }
    else
    {
        cout << "Wrong number";

    }
    return res;

  
}



//Вывод факториала в консоль

void printfactorial(int x)
{
    
    cout << "Result:" << x << endl;
}


//Ввод массива

void writemassiv (int massiv[10]);
{
    int i = 0; 

    for (i = 0; i < 10; i++)
    {
        cin >> massiv[i]; 
    }

    for (i = 0; i < 10; i++)
    {
        cout << "massiv[" << i << "]= " << massiv[i] << "\n"; 
    }
}



//Перемножение элементов массивва

void multiplymassiv(int massiv[], int& result)
{
    for (int i = 0; i < 10; i++)
    {
        if (i > 0)
        {
            result = result * massiv[i];
        }
        else
        {
            result = massiv[i];
        }
    }

   
}



//Вывод перемножения элементов массива в консоль

void printmassiv(int result)
{
    cout << "Result multiply massiv: "<< result;
}