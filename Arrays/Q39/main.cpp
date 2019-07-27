#include <iostream>

using namespace std;

float largest(float z[100], int a)
{
    float lar = z[0];
    for(int i = 1; i < a; i++)
    {
        if(lar < z[i])
                lar = z[i];
    }

    return lar;
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

    cout << endl << "Largest is: " << largest(foo, z);
    return 0;
}
