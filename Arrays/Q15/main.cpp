#include<iostream>
#include<iomanip>

using namespace std;

float summ(float a[10], int z)
{
	float sum = 0;
	for(int i = 0; i < z; i++)
			sum = sum + a[i];


	return sum;
}

float meann(float a[10], int z)
{
	return summ(a, z)/float(z);
}

int main()
{
	float foo[10];
	int m;

	cout << "Enter first dimension of the array: ";
	cin >> m;

	cout << "Enter elements: " << endl;
	for(int i = 0; i < m; i++)
		cin >> foo[i];


	for(int i = 0; i < m; i++)
		cout << foo[i] << " ";

	cout << endl;

	cout << "Mean: " << setprecision(3) << meann(foo, m) << endl;
return 0;
}
