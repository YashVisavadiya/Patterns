#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << k-- << " ";
            }
        }

        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}