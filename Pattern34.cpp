#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = (int)'a';
    int diff = int('a') - int('A');

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)k++ << " ";
            if (k & 1 == 1)
            {
                k += 32;
            }
            else
            {
                k -= 32;
            }
        }
        cout << endl;
    }

    return 0;
}