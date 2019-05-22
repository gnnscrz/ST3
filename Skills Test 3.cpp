#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	cout << "This program arranges integers in ascending order.\n\n"; 
	
	int a[100];
	int size, temp;

	cout << "Enter Array Size: ";
	cin >> size; 

	cout << "\nEnter Elements of Array: \n";

	for (int i = 0; i < size; i++)
	{
	cin >> a[i];
	}
	

	for (int i = 0; i < size; i++)
	{
		for (int j = 1 + i; j < size; j++)
		{
			if(a[i] > a[j])
			{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			}
	}


cout << "\nOutput in Ascending Order: \n";
			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " "; 
			}

_getch();
return 0;
}