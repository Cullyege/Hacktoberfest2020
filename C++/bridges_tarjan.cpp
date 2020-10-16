#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using S = long long int;
struct Edge
{
    S a, b;
    S weight;

    Edge(S a1, S b1, S weight1 = 0) : a(a1), b(b1), weight(weight1){};
};

bool sortweight(Edge a, Edge b)
{
    return a.weight < b.weight;
}
bool sortfirst(Edge a, Edge b)
{
    return a.a < b.a;
}

struct Graph
{
    vector<Edge> edges;
    vector<vector<pair<S, S>>> gr;
    S n, m;

    Graph(S vertices, S ed)
    {
        n = vertices;
        m = ed;
        gr.resize(n + 1);
    }

    void addEdge(S a, S b, S weight = 0)
    {
        Edge e(a, b, weight);
        edges.push_back(e);
        gr[a].push_back(make_pair(b, weight));
    }

    void rmvEdge(S a, S b, S weight = 0)
    {
        for (S i = 0; i < edges.size(); i++)
        {
            if (edges[i].a == a && edges[i].b == b && edges[i].weight == weight)
            {
                edges.erase(edges.begin() + i);
            }
        }
        for (S i = 0; i < gr[a].size(); i++)
        {
            if (gr[a][i].first == b && gr[a][i].second == weight)
            {
                gr[a].erase(gr[a].begin() + i);
            }
        }
    }
};

vector<bool> visited;
vector<S> tin, low;
S timer;

void dfs(S u, vector<vector<pair<S, S>>> adj, vector<Edge> &bridges, S p = -1)
{
    visited[u] = true;
    tin[u] = low[u] = timer++;
    for (pair<S, S> to : adj[u])
    {
        if (to.first == p)
            continue;
        if (visited[to.first])
        {
            low[u] = min(low[u], tin[to.first]);
        }
        else
        {
            dfs(to.first, adj, bridges, u);
            low[u] = min(low[u], low[to.first]);
            if (low[to.first] > tin[u])
            {
                Edge e(u, to.first);
                bridges.push_back(e);
            }
        }
    }
}

vector<Edge> find_bridges(Graph g)
{
    timer = 0;
    S n = g.n;                             // number of nodes
    vector<vector<pair<S, S>>> adj = g.gr; // adjacency list of graph
    vector<Edge> bridges;
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (S i = 0; i < n; ++i)
    {
        if (!visited[i])
            dfs(i, adj, bridges);
    }
    return bridges;
}

/* without all graph class
vector<vector<S>> adj(N);

vector<bool> visited;
vector<S> tin, low;
S timer;

void dfs(S u, S p = -1)
{
    visited[u] = true;
    tin[u] = low[u] = timer++;
    for (S to : adj[u])
    {
        if (to == p)
            continue;
        if (visited[to])
        {
            low[u] = min(low[u], tin[to]);
        }
        else
        {
            dfs(to, u);
            low[u] = min(low[u], low[to]);
            if (low[to] > tin[u])
            {
                //it is bridge
            }
        }
    }
}

void find_bridges(S n1)
{
    timer = 0;
    S n = n1; // number of nodes
    visited.assign(n + 1, false);
    tin.assign(n + 1, -1);
    low.assign(n + 1, -1);
    for (S i = 1; i <= n; ++i)
    {
        if (!visited[i])
            dfs(i);
    }
}*/