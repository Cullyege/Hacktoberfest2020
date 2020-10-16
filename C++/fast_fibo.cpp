#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using S = long long int;
S a[2][2], temp[2][2], res[2][2];

S fast_fibo(S x, S mod)
{
    a[0][0] = 1;
    a[0][1] = 1;
    a[1][0] = 1;
    a[1][1] = 0;
    res[0][0] = 1;
    res[0][1] = 0;
    res[1][0] = 0;
    res[1][1] = 1;
    while (x)
    {
        if (x & 1)
        {
            memset(temp, 0, sizeof(temp));
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    for (int k = 0; k < 2; k++)
                        temp[i][j] = (temp[i][j] + res[i][k] * a[k][j]) % mod;
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    res[i][j] = temp[i][j];
        }
        memset(temp, 0, sizeof(temp));
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    temp[i][j] = (temp[i][j] + a[i][k] * a[k][j]) % mod;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                a[i][j] = temp[i][j];
        x /= 2;
    }
    return (res[0][1] + res[0][0]) % mod;
}