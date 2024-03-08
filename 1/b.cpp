#include <bits/stdc++.h>

using namespace std;

main() {
    int g1, g2, g3, g4, q;
    char c;
    cin >> g1 >> c >> g2 
        >> g3 >> c >> g4
        >> q;
    int sum1 = g1 + g3,
        sum2 = g2 + g4;
    if (sum1 > sum2) {
        cout << 0;
        return 0;
    }
    int ans = 0;
    if(sum1 < sum2) {
        g3 += sum2 - sum1;
        ans += sum2 - sum1;
    }
    if(q == 1) {
        if(g3 <= g2) {
            ans++;
        }
    } else {
        if(g1 <= g4) {
            ans++;
        }
    }
    cout << ans;
}