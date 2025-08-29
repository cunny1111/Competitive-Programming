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

    int n, count(0), ccount(0);
    cin >> n;
    while (n--) {
        char c;
        cin >> c;
        if (c == 'A') count++;
        else if (c == 'D') ccount++;
    }

    if (count > ccount) cout << "Anton";
    else if (count < ccount) cout << "Danik";
    else cout << "Friendship";

    bliss;
}

