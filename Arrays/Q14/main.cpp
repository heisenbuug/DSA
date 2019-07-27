#include<iostream>

using namespace std;

float * inpuut(int z)
{
	float* a = new float[20];
	cout << "Enter elements: " << endl;
	for(int i = 0; i < z; i++)
			cin >> a[i];
	return a;
}

void outpuut(float *a, int z)
{
	for(int i = 0; i < z; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	float* foo;
	int m;

	cout << "Enter size of the array: ";
	cin >> m;

	foo = inpuut(m);
	outpuut(foo, m);

return 0;
}
