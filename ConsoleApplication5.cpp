#include <iostream>
using namespace std;


// Блок прототипов функций
int factorial(int);
void multiplymassiv(int[], int&);
void printfactorial(int);
int writefactorial(int);



int main()
{
    int n = 0;
    int y = 0;
    n = writefactorial(y);
    int x = factorial(n);
    printfactorial(x);

    int massiv[10] = { 10, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int result = 0;

    multiplymassiv(massiv, result);
    return 0;
}

int writefactorial(int y)
{
    
    cin >> y;
    return y;
}

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


void printfactorial(int x)
{
    
    cout << "Result:" << x << endl;
}



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

    cout << result;
}

