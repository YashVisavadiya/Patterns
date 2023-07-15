#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> pascal;

    pascal.push_back(vector<int>(1, 1));
    pascal.push_back(vector<int>(2, 1));

    for (int i = 0; i < n; i++)
    {
        vector<int> row(i + 1, 1);
        int k = 1;
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                cout << " ";
            }
            else
            {
                if (j == n - i - 1 or j == n - 1)
                {
                    cout << "1 ";
                }
                else
                {
                    row[k] = pascal[i - 1][k - 1] + pascal[i - 1][k];
                    cout << row[k] << " ";
                    k++;
                }
            }
        }
        if (i > 1)
        {
            pascal.push_back(row);
        }
        cout << endl;
    }

    return 0;
}