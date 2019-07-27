#include <iostream>

using namespace std;

void print2DArray(int z[10][10], int x, int y)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
            cout << z[i][j] << " ";
        cout << endl;
    }

}
int main()
{
    int foo[10][10];
    int m, n;

    cout << "Enter both dimension: ";
    cin >> m >> n;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> foo[i][j];

    print2DArray(foo, m, n);
    return 0;
}
