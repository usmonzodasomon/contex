#include <bits/stdc++.h>
#define int long long 
using namespace std;

main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans += a / 4 + a % 4;
    }
    cout << ans;
}