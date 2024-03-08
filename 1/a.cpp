#include <bits/stdc++.h>

using namespace std;

main() {
    int p, v, q, m;
    cin >> p >> v >> q >> m;
    int l1 = p - v;
    int r1 = p + v;
    int l2 = q - m;
    int r2 = q + m;
    int ans = r1 - l1 + 1;
    ans += r2 - l2 + 1;
    ans -= max(0, min(r1, r2) - max(l1, l2) + 1);
    cout << ans;
}