
#include <iostream>
using namespace std;

void writemassiv(int []);
void ChetniyElementMassiv(int [])
int main()
{
	int n;
    int *massiv;
    cout << "Write size of massiv";
    cin >> n;
    int *massiv;
        writemassiv ( massiv[n]);
        return 0;
}


//Создание массива
void writemassiv(int massiv[n]);
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        cout << "Wrie " << i << "elemnt of massiv";
        cin >> massiv[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << "massiv[" << i << "]= " << massiv[i] << "\n";
    }
}

//Количество четных элементов массива


int ChetniyElementMassiv(int[])
{
    for (i = 0; i < n; i++)
    {
        int count = 0;
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
