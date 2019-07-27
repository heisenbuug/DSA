#include<iostream>

using namespace std;

int summ(int a[10][10], int z, int y)
{
	int sum = 0;
	for(int i = 0; i < z; i++){
		for(int j = 0; j < y; j++){
			sum = sum + a[i][j];
		}
	}
	return sum;
}

float meann(int a[10][10], int z, int y)
{
	return summ(a, z, y)/float(z*y);
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

	cout  << "Sum: " << summ(foo, m, n) << endl;
	cout << "Mean: " << meann(foo, m, n) << endl;
return 0;
}
