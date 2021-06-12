
#include <iostream>
using namespace std;




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
	int &ref = count;

	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			
			
			ref++;
		
			
		}
		
	}
	cout << '\n';
	
	cout << "number of chentniy   " << ref<<"    "<<endl;
	
	int *newa= new int[ref];
	int index(0);
	cout << "Massiv chetniy   ";
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			newa[index] = a[i];
			cout << newa[index++] << ' ';
		}
	}
	cout << '\n';
	int minchet = newa[0];
	for (i = 0;i < ref;i++)
	{
		if (newa[i] < minchet)
		{
			minchet = newa[i];
		}
		
	}
	
	cout << "Minimal chetniy =   " << minchet << endl;
}