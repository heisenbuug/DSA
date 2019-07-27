#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

int main()
{
	int foo[20];
	int n;

	cout << "Enter number of elements: ";
	cin >> n;

	cout << "Enter elements: " << endl;
	for(int i = 0; i < n; i++)
		cin >> foo[i];

	cout << "Before swapping: ";
	for(int i = 0; i < n; i++)
		cout << foo[i] << " " ;

	swap(foo[1], foo[n-2]);

	cout << endl;
	cout << "After swapping: ";
	for(int i = 0; i < n; i++)
		cout << foo[i] << " " ;
	cout << endl;
return 0;
}
