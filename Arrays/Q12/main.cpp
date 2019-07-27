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

	int count = 0;

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(foo[i][j] != 0)
				count++;
		}
	}

	cout << "Total non-zero elements: " << count << endl;
return 0;
}
