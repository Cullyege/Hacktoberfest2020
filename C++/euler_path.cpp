#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<vector<long long int>> gr;
list<long long int> ans;
void euler_path(long long int node, list<long long int>::iterator iter)
{
    for (long long int i = 0; i < c; i++)
    {
        if (gr[node][i])
        {
            gr[node][i]--;
            euler_path(i, ans.insert(iter, i));
        }
    }
}