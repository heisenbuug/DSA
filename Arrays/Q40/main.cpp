#include <iostream>

using namespace std;

int main()
{
    int foo[100];
    int z;

    cout << "Enter length: ";
    cin >> z;

    for(int i = 0; i < z; i++)
        cin >> foo[i];

    for(int i = 0;i < z; i++)
        cout << foo[i] << " ";

    cout << endl << "Largest is: " << (foo, z);
    return 0;
}
