#include<iostream>

using namespace std;

int main()
{

	int foo1[3][3], foo2[3][3];
	cout << "Enter elements for first matrix: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> foo1[i][j];
		}
	}

	cout << "Enter elements for second matrix: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> foo2[i][j];
		}
	}

	cout << endl;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << foo1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << foo2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "Sum of two matrices" << endl;

	int *ptr1;
	int *ptr2;

	ptr1 = &foo1[0][0];
	ptr2 = &foo2[0][0];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << *ptr1 + * ptr2 << " ";
			ptr1++;
			ptr2++;
		}
	cout << endl;
	}
return 0;
}
