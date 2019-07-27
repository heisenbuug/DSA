#include <iostream>

using namespace std;

void print2DArray(int z[10][10], int x)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < x; j++)
            cout << z[i][j] << " ";
        cout << endl;
    }

}

void calc(int z[10][10], int y[10][10], int m)
{
    int res[10][10];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            res[i][j] = (2 * z[i][j]) + (3 * y[i][j]);
        }
    }

    print2DArray(res, m);
}
int main()
{
    int foo1[10][10], foo2[10][10];
    int m;

    cout << "Enter both dimension: ";
    cin >> m;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> foo1[i][j];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> foo2[i][j];

    print2DArray(foo1, m);
    cout << endl;
    print2DArray(foo2, m);

    calc(foo1, foo2, m);
    return 0;
}
