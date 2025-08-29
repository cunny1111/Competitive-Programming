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

    string s;
    cin >> s;

    char target1('7'), target2('4');
    int c(count(s.begin(), s.end(), target1)), c2(count(s.begin(), s.end(), target2));

    if (c + c2 == 7 or c + c2 == 4) cout << "YES";
    else cout << "NO";

    bliss;
}

