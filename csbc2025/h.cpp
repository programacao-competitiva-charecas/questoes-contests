#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define loop(x, i, f) for (int x = i; x < f; x++)
#define fir first
#define sec second
#define pb push_back
#define pi pair<int,int>

using namespace std;

int fact(int i, vi &dp) {
    if (i == 1) {
        dp[i] = 1;
        return 1;
    }
    if (dp[i] != 0) return dp[i];
    dp[i] = i * fact(i-1, dp);
    return dp[i];
}

int dfs(vector<vi> g, int i, int visited, vi fact, int n) {
    if (g[i].empty()) {
        return fact[n - visited];
    }
    visited++;
    int total = 0;
    loop(v, 0, g[i].size()) {
        total += dfs(g, g[i][v], visited, fact, n);
    }
    return total;
}

signed main() {
    ios_base::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    vector<vi> g(n+1);
    loop(i, 1, m+1) {
        int a, b;
        cin >> a >> b;
        g[a].pb(b);
    }
    vi dp(17);
    dp[0] = 1;
    fact(16, dp);
    cout << dfs(g, 1, 0, dp, n) << endl;
    return 0;
}