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

    int n, c(0), x;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());
    cin >> x;

    int left(0), right(n - 1);
    while (left < right) {
        if (a[left] + a[right] == x) {
            c++;
            left++;
            right--;
        }
        else if (a[left] + a[right] > x) right--;
        else left++;
    }

    cout << c;

    bliss;
}

