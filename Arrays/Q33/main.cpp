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

bool isSymetric(int z[10][10], int m)
{
    bool p = 1;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(z[i][j] != z[j][i])
            {
                    p = false;
            }
        }
    }

    return p;
}
int main()
{
    int foo[10][10];
    int m;

    cout << "Enter both dimension: ";
    cin >> m;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> foo[i][j];

    print2DArray(foo, m);

    cout << isSymetric(foo, m);
    return 0;
}
