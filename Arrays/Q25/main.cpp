#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter both dimensions if the array: ";
    cin >> m >> n;

    int foo1[10][10], foo2[10][10];

    cout << "Enter elements of first matrix: " << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> foo1[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl;

        for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> foo2[i][j];
        }
    }


    cout << "Elements of the first array are: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << foo1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elements of the Second array are: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << foo2[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            foo1[i][j] = foo1[i][j] + foo2[i][j];
        }
    }

    cout << "Resultant array: " << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << foo1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
