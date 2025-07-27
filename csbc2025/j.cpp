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
  int b, p;
  cin >> b >> p;
  vector<tuple<int, int, int>> barcos;
  vector<pi> peixes;
  loop(i, 0, b) {
    int x, r, y;
    cin >> x >> r >> y;
    barcos.pb(make_tuple(x, y, r));
  }

  loop(i, 0, p) {
    int x, y;
    cin >> x >> y;
    peixes.pb(make_pair(x, y));
  }

  sort(barcos.begin(), barcos.end(), [](auto const &e1, auto const &e2) {
    return get<1>(e1) < get<1>(e2);
  });

  int count = 0;
  loop(i, 0, p) {
    int xp = peixes[i].fir;
    int yp = peixes[i].sec;
    int barco_idx = upper_bound(barcos.begin(), barcos.end(), yp, [](int val, auto const &it) {
      return get<1>(it) + get<2>(it) >= val;
    }) - barcos.begin();
    loop(j, barco_idx, b) {
      int xb = get<0>(barcos[j]);
      int yb = get<1>(barcos[j]);
      int r = get<2>(barcos[j]);
      if ((xp - xb)*(xp - xb) + (yp- yb)*(yp - yb) <= r*r) {
        count++;
        break;
      }
      if (yp <= yb && xp >= xb - r && xp <= xb + r) {
        count++;
        break;
      }
    }
  }

  cout << count << endl;
  return 0;
}