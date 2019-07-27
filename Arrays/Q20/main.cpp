#include<iostream>

using namespace std;

int main()
{
	float foo1[20], foo2[20], foo[20];
	int z, y;

	cout << "Enter size: ";
	cin >> z;

	for(int i = 0; i < z; i++)
		cin >> foo1[i];

	cout << "Enter size: ";
	cin >> y;

	for(int i = 0; i < y; i++)
		cin >> foo2[i];

	for(int i = 0; i < z; i++)
		foo[i] = foo1[i];
	for(int i = z, j = 0; i < z + y && j < y; i++, j++)
		foo[i] = foo2[j];

	for(int i = 0; i < z+y; i++)
		cout << foo[i] << " ";
	cout << endl;
return 0;
}
