#include <iostream>

using namespace std;

int diaSum(int z[10][10], int a)
{
    int sum = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(i == j)
                sum = sum + z[i][j];
            if(i - j == a - 1 || j - i == a - 1)
                sum = sum + z[i][j];
        }

    }
    return sum;
}

int main()
{
    int foo[10][10];
    int m;

    cout << "Enter dimension: ";
    cin >> m;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> foo[i][j];

    cout << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
            cout << foo[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of diagonals: " << diaSum(foo, m) << endl;
    return 0;
}
