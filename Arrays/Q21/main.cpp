#include<iostream>

using namespace std;

int largest(int a[10], int z)
{
 	int lar = a[0];
 	int temp = a[1];

 	for(int i = 1; i < z; i++)
 	{
 		if(lar < a[i])
 		{
 			temp = lar;
 			lar = a[i];
  		}

 		else if(temp < lar && temp < a[i])
 			temp = a[i];
 	}
 	return temp;
}

int smallest(int a[10], int z)
{
 	int sma = a[0];
 	int temp = a[1];

 	for(int i = 1; i < z; i++)
 	{
 		if(sma > a[i])
 		{
 			temp = sma;
 			sma = a[i];
  		}

 		else if(temp > sma && temp > a[i])
 			temp = a[i];
 	}
 	return temp;
}

int main()
{
 	int foo[10], m;
 	cout << "Enter size: ";
 	cin >> m;

 	for(int i = 0; i < m; i++)
 		cin >> foo[i];

 	cout << endl;

 	for(int i = 0; i < m; i++)
 		cout << foo[i] << " ";

 	cout << endl;

 	cout << "Second Largest Number is: " << largest(foo, m) << endl;
 	cout << "Second Smallest Number is: " << smallest(foo, m) << endl;
return 0;
}
