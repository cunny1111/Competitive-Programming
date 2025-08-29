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

    string s;
    int c(1);
    cin >> s;

    for (int i(0); i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            c++;
            if (c >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else c = 1;
    }

    cout << "NO";

    bliss;
}

