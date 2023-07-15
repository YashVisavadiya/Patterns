#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = (int)'A' + n - i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i + 1)
            {
                cout << (char)k-- << " ";
            }
        }
        cout << endl;
    }

    return 0;
}