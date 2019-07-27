#include<iostream>

using namespace std;

int main()
{
	float foo[10];
	int m;

	cout << "Enter size of the array: ";
	cin >> m;

	cout << "Enter elements: " << endl;
	for(int i = 0; i < m; i++)
			cin >> foo[i];


	for(int i = 0; i < m; i++)
			cout << foo[i] << " ";
	cout << endl;


return 0;
}
