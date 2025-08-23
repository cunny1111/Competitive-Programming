#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k, n, w, cost(0);
    cin >> k >> n >> w;

    for (int i(1); i <= w; i++) cost += i * k;

//    cerr << cost << "\n";
    if (cost <= n) cout << 0;
    else cout << abs(n - cost);

    bliss;
}

