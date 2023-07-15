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
                cout << " ";
            }
            else
            {
                cout << k--;
            }
        }
        for (int ind = 2; ind <= i; ind++)
        {
            cout << ind;
        }
        cout << endl;
    }

    return 0;
}