#include<iostream>

using namespace std;

float largestNum(float a[10], int z)
{
	float lar = a[0];
	for(int i = 0; i < z; i++)
	{
		if(lar < a[i])
			lar = a[i];
	}

	return lar;
}

int main()
{
	float foo[10];
	int n;

	cout << "Enter size: ";
	cin >> n;

	for(int i = 0; i < n; i++)
		cin >> foo[i];

	cout << "Largest number: " << largestNum(foo, n) << endl;
return 0;
}
