#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int x[100005] = {0}, y[100005] = {0}, z[100005] = {0};

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, q;
  cin >> n >> q;

  for (int i(1); i <= n; i++) {
    int type;
    cin >> type;

    x[i] = x[i - 1];
    y[i] = y[i - 1];
    z[i] = z[i - 1];

    if (type == 1)
      x[i]++;
    else if (type == 2)
      y[i]++;
    else if (type == 3)
      z[i]++;
  }

  while (q--) {
    int a, b;
    cin >> a >> b;

    int res_x(x[b] - x[a - 1]), res_y(y[b] - y[a - 1]), res_z(z[b] - z[a - 1]);
    cout << res_x << " " << res_y << " " << res_z << "\n";
  }

  return 0;
}
