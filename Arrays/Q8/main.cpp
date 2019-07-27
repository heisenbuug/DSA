#include<iostream>

using namespace std;

int diagonalSum(int a[10][10], int z, int y)
{
	int dia = 0;
	for(int i = 0; i < z; i++)
		dia = dia + a[i][i];

	return dia;
}

int main()
{
	int foo[10][10];
	int m, n;

	cout << "Enter first dimension of the array: ";
	cin >> m;
	cout << "Enter second dimension of the array: ";
	cin >> n;

	cout << "Enter elements: " << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> foo[i][j];
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << foo[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Sum of diagonal: " << diagonalSum(foo, m, n) << endl;
return 0;
}
