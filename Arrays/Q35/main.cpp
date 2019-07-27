#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = new int[10];

    int *cpy = ptr;

    for(int i = 0; i < 5; i++, cpy++)
        cin >> *cpy;

    for(int i = 0; i < 5; i++, ptr++, cpy--)
        cout << *ptr << " ";

    for(int i = 0; i < 5; i++, cpy++)
    {
        int temp = *cpy;
        for(int j = 0; j < 5; j++)
        {
            if(temp > *cpy)
            {

            }
        }
    }

    //cout << *cpy;
    return 0;
}
