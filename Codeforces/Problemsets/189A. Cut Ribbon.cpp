// dp solution.
#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

// dp[i] max(dp[i - a], dp[i - b], dp[i - c]) + 1
// dp[0] = 0

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> res(n + 1, -1e9);
    
    res[0] = 0;
    for (int i(1); i <= n; i++) {
        if (i >= a) res[i] = max(res[i], res[i - a] + 1);
        if (i >= b) res[i] = max(res[i], res[i - b] + 1);
        if (i >= c) res[i] = max(res[i], res[i - c] + 1);
    }

    cout << res[n];

    bliss;
}

