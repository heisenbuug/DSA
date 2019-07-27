#include<iostream>

using namespace std;

void findMinPosition(float a[10], int z)
{
	int smallestPos = 0;
	int sma = a[0];

	for(int i = 1; i < z; i++)
	{
		if(sma > a[i])
		{
			sma = a[i];
			smallestPos = i;
		}
	}

	cout << endl << "Smallest number: " << sma << endl;
	cout << "Position: " << smallestPos << endl;
}

int main()
{
	int m;
	float foo[10];

	cout << "Enter size: ";
	cin >> m;

	for(int i = 0; i < m; i++)
		cin >> foo[i];

	for(int i = 0; i < m; i++)
		cout << foo[i] << " ";

	findMinPosition(foo, m);

return 0;
}
