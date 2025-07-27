#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define loop(x, i, f) for (int x = i; x < f; x++)
#define fir first
#define sec second
#define pb push_back
#define pi pair<int,int>

using namespace std;

int fib(int a, int b, int k, vi &dp) {
    if (k == 1) return a;
    if (k == 2) return b;
    if (dp[k] == 0) {
        dp[k] = (fib(a, b, k-1, dp) + 1) ^ fib(a, b, k-2, dp);
    }
    return dp[k];
}

signed main() {
    ios_base::sync_with_stdio(false);
    int a, b, k;
    cin >> a >> b >> k;
    vi dp(k+1);
    int res = fib(a, b, k, dp);
    cout << res << endl;
    return 0;
}