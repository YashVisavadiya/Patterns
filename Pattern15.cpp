#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                if (j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << "**";
                }
            }
            else
            {
                if (j <= i - 1)
                {
                    cout << " ";
                }
                else if (j == i or j == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}