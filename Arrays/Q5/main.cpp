#include<iostream>

using namespace std;

int square_sum(int a[50], int z)
{
	int sum=0;
	for(int i = 0; i < z; i++)
		 sum = sum + (a[i] * a[i]);

	return sum;
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

	cout << "Sum of squares of the elements: " << square_sum(foo, n) << endl;

return 0;
}
