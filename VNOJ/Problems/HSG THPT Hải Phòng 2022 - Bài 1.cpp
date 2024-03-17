#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ligma(i, n) for (int i = 0; i < (n); i++)
#define souls(i, a, b) for (int i = (a); i <= (b); i++)
#define despairs(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) (x).begin(), (x).end()
#define ___Zawajiro___ signed main()
#define bliss return 0
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

int count(const string& s, const string& word) {
    int c = 0;
    size_t pos = 0;

    while ((pos = s.find(word, pos)) != string::npos) {
        c++;
        pos += word.length();
    }
    return c;
}

___Zawajiro___ {
    fastio;
    string s, x = "virus";
    getline(cin, s);

    cout << count(s, x);
    bliss;
}
