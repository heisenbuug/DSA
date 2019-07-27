#include<iostream>

using namespace std;

int findMaxPosition(float a[10], int z)
{
	int largestPos = 0;
	int lar = a[0];

	for(int i = 1; i < z; i++)
	{
		if(lar < a[i])
		{
			lar = a[i];
			largestPos = i;
		}
	}

	return largestPos;
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

	cout << endl << "Larget number is at poition: " << findMaxPosition(foo, m) << endl;

return 0;
}
