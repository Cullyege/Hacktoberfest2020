#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 100005

struct CentroidTree
{
    using S = int;
    using T = int;
    S start, numNodes;
    vector<set<T>> adj;
    vector<S> subtree;
    vector<S> parentCentroid;
    CentroidTree(S s, S nodes)
    {
        start = s;
        adj.resize(nodes);
        subtree.resize(nodes);
        parentCentroid.resize(nodes);
    }
    void addEdge(T a, T b)
    {
        adj[a].insert(b);
        adj[b].insert(a);
    }
    void setGraph(vector<set<T>> _graph)
    {
        adj = _graph;
    }
    void calcSubtree(S node, S parent)
    {
        numNodes++;
        subtree[node] = 1;
        for (auto i : adj[node])
        {
            if (i == parent)
                continue;
            calcSubtree(i, node);
            subtree[node] += subtree[i];
        }
    }
    S getCentroid(S node, S parent)
    {
        for (auto i : adj[node])
        {
            if (i == parent)
                continue;
            if (subtree[i] > (numNodes / 2))
                return getCentroid(i, node);
        }
        return node;
    }
    void decompose(S node, S parent)
    {
        numNodes = 0;
        calcSubtree(node, node);
        S centroid = getCentroid(node, node);
        parentCentroid[centroid] = parent;
        for (auto i : adj[centroid])
        {
            adj[i].erase(centroid);
            decompose(i, centroid);
        }
    }
};