#include <bits/stdc++.h>

#define int long long
#define vi vector<int>
#define loop(x, i, f) for (int x = i; x < f; x++)
#define fir first
#define sec second
#define pb push_back
#define pi pair<int,int>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int res = (n*(n+1)) / 2;
    cout << res << endl;
    return 0;
}