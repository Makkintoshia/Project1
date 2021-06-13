
#include <iostream>
using namespace std;

void writesizewassiv(int);



int main()
{
	int* a;
	int n;
	cout << "Write size of massiv ";
	cin >> n;
	a = new int[n];

	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Write  " << i << "  element   ";
		cin >> a[i];
	}
	cout << "Original massiv : ";
	for (i = 0;i < n;i++) cout << "a[" << i << "]=" << a[i] << " ";

	int count=0;
	bool е = false;
	int minchet1 = 0;
	for (i = 0; i < n; i++)
	{
		
		if (a[i] % 2 == 0)
		{
			
			if ( е == false)
			{ 
				minchet1 = a[i]; 
			}
			
			if (a[i] < minchet1)
			{
				minchet1 = a[i];
			}

			count++;
		
			е = true;
		}
		
	}
	cout << '\n';
	
	cout << "number of chentniy   " << count<<"    "<<endl;
		
		cout << "Minimal chetniy =   " << minchet1 << endl;
}



void writesizemassiv(int n)
{
	int n;
	cout << "Write size of massiv ";
	cin >> n;
}