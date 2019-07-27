#include <iostream>

using namespace std;

int main()
{
    int foo1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int foo2[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int foo[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            foo[i][j] = foo[i][j] + (foo1[i][j] * foo2[j][i]);
        }
    }

    cout << "Mat one: " << endl;
        for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << foo1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Mat two: " << endl;
        for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << foo2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Elements after multiplication: " << endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << foo[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
