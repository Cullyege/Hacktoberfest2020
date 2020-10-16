#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define N 100005
#define INF S_MAX

/// Dynamic segment tree... range updates and range queries//////////
/////////for sum///////////////

struct Vertex
{
    ll Sum, lazy;
    Vertex *left, *right;
    Vertex(ll _Sum, Vertex *_left, Vertex *_right)
    {
        Sum = _Sum;
        left = _left;
        right = _right;
        lazy = 0;
    }
};

struct DST
{
    using S = ll;

    Vertex *root;
    DST()
    {
        root = new Vertex(0, NULL, NULL);
    }

    void push(Vertex *root, ll l, ll r)
    {
        ll mid = (l + r) / 2;
        root->left->Sum += (mid - l + 1) * root->lazy;
        root->left->lazy += root->lazy;
        root->right->Sum += (r - mid) * root->lazy;
        root->right->lazy += root->lazy;
        root->lazy = 0;
    }

    void update(Vertex *root, S l, S r, S s, S e, S value)
    {
        if (s > r || l > e)
            return;
        if (l >= s && r <= e)
        {
            root->Sum += (r - l + 1) * value;
            root->lazy += value;
            return;
        }
        if (root->left == NULL)
            root->left = new Vertex(0, NULL, NULL);
        if (root->right == NULL)
            root->right = new Vertex(0, NULL, NULL);
        push(root, l, r);
        ll mid = (l + r) / 2;
        update(root->left, l, mid, s, e, value);
        update(root->right, mid + 1, r, s, e, value);
        root->Sum = root->left->Sum + root->right->Sum;
    }

    S query(Vertex *root, S tl, S tr, S l, S r)
    {
        if (root == NULL || tl > r || l > tr)
            return 0;
        if (l <= tl && tr <= r)
            return root->Sum;
        if (root->left == NULL)
            root->left = new Vertex(0, NULL, NULL);
        if (root->right == NULL)
            root->right = new Vertex(0, NULL, NULL);
        push(root, l, r);
        ll mid = (tl + tr) / 2;
        return query(root->left, tl, mid, l, r) + query(root->right, mid + 1, tr, l, r);
    }
};