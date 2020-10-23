#include <bits/stdc++.h>

using namespace std;
int maxi(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int lns(int *a, int *b, int n, int m)
{
    int lcs[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (a[i - 1] == b[j - 1])
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else
            {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    int index = lcs[n][m];
    vector<int> res(index);
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            res[index - 1] = a[i - 1];
            i--;
            j--;
            index--;
        }
        else if (lcs[i - 1][j] > lcs[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    for (auto x : res)
    {
        cout << x;
    }
    cout << endl;
    return lcs[n][m];
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int k = lns(a, b, n, m);
    cout << k;
}
