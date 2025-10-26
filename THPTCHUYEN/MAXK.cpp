#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, sum(0);
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a) cin >> x;
    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    k--;
    while (k >= 0) {
        sum += a[k];
        k--;
    }

    cout << sum;

    bliss;
}

