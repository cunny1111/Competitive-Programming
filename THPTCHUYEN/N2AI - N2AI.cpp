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

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> b(n);
    for (int &x : b) cin >> x;
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    for (int i(0); i < n; i++) cout << a[i] << " ";
    for (int i(0); i < n; i++) cout << b[i] << " ";

    bliss;
}

