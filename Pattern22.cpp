#include <bits/stdc++.h>
using namespace std;

int getMax(int n)
{
    if (n & 1 == 1)
    {
        return ((n + 1) / 2) * n;
    }
    return (n / 2) * (n + 1);
}

int getSize(int n)
{
    int ans = 0;
    while (n)
    {
        n /= 10;
        ans++;
    }
    return ans;
}

void space(int n, int max_len)
{
    int curr_len = getSize(n);

    for (int i = 1; i <= max_len - curr_len + 1; i++)
    {
        cout << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int max_len = getSize(getMax(n));
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k;
            space(k, max_len);
            k++;
        }
        cout << endl;
    }

    return 0;
}