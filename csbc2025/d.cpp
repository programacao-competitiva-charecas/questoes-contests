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
    vi a(n);
    int b;
    map<int, int> mp;
    loop(i, 0, n) {
        cin >> b;
        if (mp.count(b) == 0) {
            mp[b] = 0;
        }
        mp[b]++;
    }
    int count = 0;
    for (map<int, int>::iterator it=mp.begin(); it != mp.end();) {
        if (++it == mp.end()) break;
        else --it;
        if (abs(it->fir - (++it)->fir) > 1) continue;
        --it;
        count += (it->sec * (++it)->sec);
    }
    cout << count << endl;
    return 0;
}