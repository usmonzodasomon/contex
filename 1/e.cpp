#include <bits/stdc++.h>
#define int long long 
using namespace std;

main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, d;
    cin >> n >> k >> d;
    bool B = 0;
    for(int q = 0; q <= 9; q++) {
        int d = n * 10 + q;
        if(d % k == 0) {
            B = 1;
            n = d;
            break;
        }
    }
    if(!B) {
        cout << -1;
        return 0;
    }
    cout << n;
    for(int i = 0; i < d - 1; i++) {
        cout << 0;
    }
}