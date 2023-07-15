#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = n;
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << k-- << " ";
            }
            else
            {
                cout << (k + 1) << " ";
            }
        }

        k++;
        if (k == 1)
        {
            k++;
        }

        for (int j = 2; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << k << " ";
            }
            else
            {
                cout << k++ << " ";
            }
        }
        cout << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        int k = n;
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i + 1)
            {
                cout << k-- << " ";
            }
            else
            {
                cout << (k + 1) << " ";
            }
        }

        k++;
        for (int j = 1; j <= n - 1; j++)
        {
            if (j <= i - 2)
            {
                cout << k << " ";
            }
            else
            {
                cout << k++ << " ";
            }
        }
        cout << endl;
    }

    return 0;
}