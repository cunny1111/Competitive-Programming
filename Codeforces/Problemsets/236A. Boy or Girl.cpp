#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

string rduplicate(string& s) {
    string res("");
    set<char> seen;

    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            res += c;
        }
    }
    return res;
}

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    string news(rduplicate(s));
//    cerr << news << "\n";
    if (news.length() & 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    bliss;
}

