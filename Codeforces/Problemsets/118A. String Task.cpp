#pragma GCC optimize("O3")
// #pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
// #define int long long
#define ____Miyuki____ signed main()
#define bliss return 0
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }
using namespace std;

string rvowels(string& s) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    for (int i(0); i < s.length(); i++) {
        if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
            s = s.replace(i, 1, "");
            i -= 1;
        } 
    }
    return s;
}

____Miyuki____ {

    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string news(rvowels(s));

    for (int i(0); i < news.length(); i++) cout << "." << s[i];

    bliss;
}

