#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

vector<int> pheebs;
void fiboge(int n) {
  int f1(1), f2(2);
  pheebs.emplace_back(f1);
  pheebs.emplace_back(f2);

  while (true) {
    int nf = pheebs.back() + pheebs[pheebs.size() - 2];
    if (nf > n)
      break;
    pheebs.emplace_back(nf);
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int x, c(0);
  cin >> x;

  fiboge(x);
  for (int i(pheebs.size() - 1); i >= 0; i--) {
    if (x == 0)
      break;
    if (pheebs[i] <= x) {
      x -= pheebs[i];
      c++;
    }
  }

  cout << c;

  return 0;
}
