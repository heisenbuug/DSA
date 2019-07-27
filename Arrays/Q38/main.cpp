#include <iostream>

using namespace std;

float mean(float z[100], int a)
{
    float sum = 0.0;
    for(int i = 0; i < a; i++)
    {
            sum = sum + z[i];
    }

    return sum/a;
}
int main()
{
    float foo[100];
    int z;

    cout << "Enter length: ";
    cin >> z;

    for(int i = 0; i < z; i++)
        cin >> foo[i];

    for(int i = 0;i < z; i++)
        cout << foo[i] << " ";

    cout << endl << "Mean is: " << mean(foo, z);
    return 0;
}
