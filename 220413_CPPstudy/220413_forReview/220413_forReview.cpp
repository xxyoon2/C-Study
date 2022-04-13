#include <iostream>

using namespace std;

int main()
{
    int count;

    //1
    cout << "몇 줄을 찍을까요? : " << endl;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //2
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if ((i + j) >= (count + 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    //3
    for (int i = 1; i <= count; i++)
    {
        for (int j = count; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //4
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i > j)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //5
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count * 2 - 1; j++)
        {
            if ((i + j <= count) || (j - i >= count))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //6
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count * 2 - 1; j++)
        {
            if ((i > j) || (i + j >= count * 2 + 1))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //7
    for (int i = 1; i <= count * 2 - 1; i++)
    {
        for (int j = 1; j <= count * 2 - 1; j++)
        {
            if ((i + j <= count) || (j - i >= count) || (i - j >= count) || (i + j >= count * 3))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //8(수정 필요)
    for (int i = 1; i <= count * 2 - 1; i++)
    {
        for (int j = 1; j <= count * 2; j++)
        {
            if ((i == 3) || (i + j <= count) || (i + j >= count * 2 + 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
