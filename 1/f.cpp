#include <bits/stdc++.h>
#define int long long 
using namespace std;

main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    int oddPos;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2) {
            oddPos = i;
        }
    }

    vector<char> ans(n - 1);
    for(int i = oddPos + 1; i < n; i++) {
        if(a[i] % 2) {
            ans[i - 1] = 'x';
        } else {
            ans[i - 1] = '+';
        }
    }

    for(int i = oddPos - 1; i >= 0; i--) {
        if(a[i] % 2) {
            ans[i] = 'x';
        } else {
            ans[i] = '+';
        }
    }
    for(char i : ans) 
        cout << i;

}