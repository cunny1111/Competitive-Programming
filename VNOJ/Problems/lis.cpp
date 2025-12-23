// greedy solution

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  vector<int> tails;
  for (int x : a) {
    if (tails.empty() or tails.back() < x)
      tails.push_back(x);

    else {
      auto it = lower_bound(tails.begin(), tails.end(), x);
      *it = x;
    }
  }

  cout << tails.size();

  return 0;
}
