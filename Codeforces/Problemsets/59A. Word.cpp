#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

int count(string s) {
    int uppercase(0), lowercase(0);
    for (int i(0); i < s.length(); i++) {
        if (s[i] >= 'A' and s[i] <= 'Z') uppercase++;
        else if (s[i] >= 'a' and s[i] <= 'z') lowercase++;
    }
    
    if (lowercase >= uppercase) return 0;
    else return 1;
}

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    if (count(s) == 0) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }

    bliss;
}

