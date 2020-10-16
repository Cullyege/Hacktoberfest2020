#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 100005
#define M 100005
#define INF INT64_MAX

using S = long long int;

vector<vector<pair<S, S>>> adj(N);

void dijkstra(S s, vector<S> &d, vector<S> &p)
{
    S n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<S, S>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty())
    {
        S v = q.top().second;
        S d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v])
        {
            S to = edge.first;
            S len = edge.second;

            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}
