#include <iostream>

using namespace std;

int ** addition(int m[10][10], int n[10][10], int z, int y)
{
    int **a = new int*[z];
    for(int i = 0; i < y; ++i)
    {
        a[i] = new int[z];
    }

    for(int i = 0; i < z; i++)
    {
        for(int j = 0; j < y; j++)
        {
            a[i][j] = m[i][j] + n[i][j];
        }
    }

    return a;
}

int ** subs(int m[10][10], int n[10][10], int z, int y)
{
    int **a = new int*[z];
    for(int i = 0; i < y; ++i)
    {
        a[i] = new int[z];
    }

    for(int i = 0; i < z; i++)
    {
        for(int j = 0; j < y; j++)
        {
            a[i][j] = m[i][j] - n[i][j];
        }
    }

    return a;
}

void ** transpose(int m[10][10], int n[10][10], int z, int y)
{
    int **a = new int*[z];
    for(int i = 0; i < y; ++i)
    {
        a[i] = new int[z];
    }

    cout << "Transpose of Mat 1: \n";
    for(int i = 0; i < z; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << m[j][i] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of Mat 2: \n";
    for(int i = 0; i < z; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << n[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}

void displayMat(int a[10][10], int z, int y)
{
    for(int i = 0; i < z; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cout << "Enter both dimensions of the array: ";
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
    displayMat(foo1, m, n);

    cout << "Elements of the Second array are: " << endl;
    displayMat(foo2, m, n);

    bool d = true;

    while(d != false){

    int choice;
    cout << "Enter options\n1. Addition\n2. Subtraction\n3. Transpose\n4. Exit\n";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            int ** foo = addition(foo1, foo2, m, n);
            cout << "Resultant array: " << endl;
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << foo[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 2:
        {
            int ** foo = subs(foo1, foo2, m, n);
            cout << "Resultant array: " << endl;
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << foo[i][j] << " ";
                }
                cout << endl;
            }
            break;
        }

        case 3:
            transpose(foo1, foo2, m, n);
            break;

        case 4:
            cout << "Exit!!";
            d = false;
            break;

        default: cout << "Wrong Selection, try again";
            break;
    }
    }
    return 0;
}
