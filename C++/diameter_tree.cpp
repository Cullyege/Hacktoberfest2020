#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 100005
vector<vector<ll>> graph(N);
vector<ll> visited(N);
vector<ll> dp(N);

//fill dp all elements with 0 and fill visited all elements with 0
ll diameter(ll u)
{
    visited[u] = 1;
    ll ans = 0;
    dp[u] = 0;
    ll firstmax = 0, secondmax = 0;
    for (ll i = 0; i < graph[u].size(); i++)
    {
        if (!visited[graph[u][i]])
        {
            ans = max(ans, diameter(graph[u][i]));
            dp[u] = max(dp[u], dp[graph[u][i]] + 1);
            if (firstmax <= dp[graph[u][i]])
            {
                secondmax = firstmax;
                firstmax = dp[graph[u][i]];
            }
            else if (secondmax < dp[graph[u][i]])
            {
                secondmax = dp[graph[u][i]];
            }
        }
    }
    if (graph[u].size() >= 2)
        ans = max(ans, firstmax + secondmax + 2);
    ans = max(ans, dp[u]);

    return ans;
}
