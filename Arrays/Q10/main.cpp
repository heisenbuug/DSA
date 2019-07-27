#include<iostream>

using namespace std;

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

	int fooT[10][10];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			fooT[i][j] = foo[j][i];
		}
	}


	cout << "After Transpose: " << endl;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << fooT[i][j] << " ";
		}
		cout << endl;
	}
return 0;
}
