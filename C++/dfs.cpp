#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 100005
vector<vector<ll>> adj(N);
vector<ll> visited(N);

void dfs(ll u)
{
    visited[u] = 1;
    for (ll i = 0; i < adj[u].size(); i++)
    {
        if (!visited[adj[u][i]])
        {
            dfs(adj[u][i]);
        }
    }
}

void input_adj(long long int n)
{
    for (long long int i = 0; i < n - 1; i++)
    {
        long long int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}