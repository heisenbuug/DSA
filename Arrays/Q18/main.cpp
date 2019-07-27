#include<iostream>

using namespace std;

int main()
{
	int m, n;
	int foo[10][10], odd[10], even[10];
	int z = 0;
	int y = 0;

	cout << "Enter first dimension: ";
	cin >> m;
	cout << "Enter second dimension: ";
	cin >> n;

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			cin >> foo[i][j];
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << foo[i][j] << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(foo[i][j] % 2 == 0)
			{
				even[z] = foo[i][j];
				z++;
			}
			else
			{
				odd[y] = foo[i][j];
				y++;
			}
		}

	}

	cout << "Even array: ";
	for(int i = 0; i < z; i++)
		cout << even[i] << " ";
	cout << endl;

	cout << "Odd array: ";
	for(int i = 0; i < y; i++)
		cout << odd[i] << " ";
	cout << endl;

return 0;
}

