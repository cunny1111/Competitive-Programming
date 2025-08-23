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
    cin >> s;

    vector<int> a;
    for (int i(0); i < s.length(); i += 2) {
        char temp = s[i]; 
        int num = temp - '0';
        a.push_back(num);
    }

    sort(a.begin(), a.end());
    for (int i(0); i < a.size(); i++) {
        if (i == a.size() - 1) {
            cout << a[i];
            break;
        }
        else cout << a[i] << "+";
    }

    bliss;
}

