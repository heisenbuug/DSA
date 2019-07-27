#include <iostream>

using namespace std;

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
    return 0;
}
