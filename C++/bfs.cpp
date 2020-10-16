#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define v vector
#define pb push_back
#define fi first
#define se second
#define ALL(v) v.begin(), v.end()
#define UN(v) sort((v).begin(), (v).end()), v.erase(unique(v.begin(), v.end()), v.end())
#define N 31622779
#define mod 998244353

using S = ll;
vector<vector<S>> adj; // adjacency list representation
S n;                   // number of nodes

void bfs(S s, vector<S> &d, vector<S> &p, vector<S> &used)
{
    queue<S> q;
    q.push(s);
    used[s] = true;
    p[s] = -1;
    d[s] = 0;
    while (!q.empty())
    {
        S v = q.front();
        q.pop();
        for (S u : adj[v])
        {
            if (!used[u])
            {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
}