#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter both dimensions if the array: ";
    cin >> m >> n;

    int foo[10][10];

    cout << "Enter Numbers: " << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> foo[i][j];
        }
    }


    cout << "Elements of the array are: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << foo[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
