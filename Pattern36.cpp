#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << k++;
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << --k;
            }
        }
        cout << endl;
    }

    return 0;
}