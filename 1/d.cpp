#include <bits/stdc++.h>
#define int long long 
using namespace std;

main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int r1 = -1, r2 = -1, b1 = -1, b2 = -1;
    char c;
    vector<vector<char>> v(8, vector<char>(8));
    vector<vector<int>> ans(8, vector<int> (8, 0));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
                        if(v[i][j] == 'B') {
                ans[i][j] = 1;
                for(int q = 1; q + i < 8 and q + j < 8; q++) {
                    ans[i + q][j + q] = 1;
                    if(v[i + q][j + q] != '*') {
                        break;
                    }
                }
                for(int q = 1; i - q >= 0 and j - q >= 0; q++) {
                    ans[i - q][j - q] = 1;
                    if(v[i - q][j - q] != '*') {
                        break;
                    }
                }
                for(int q = 1; q + i < 8 and j - q >= 0; q++) {
                    ans[i + q][j - q] = 1;
                    if(v[i + q][j - q] != '*') {
                        break;
                    }
                }
                for(int q = 1; i - q >= 0 and j + q < 8; q++) {
                    ans[i - q][j + q] = 1;
                    if(v[i - q][j + q] != '*') {
                        break;
                    }
                }
            } else if(v[i][j] == 'R') {
                ans[i][j] = 1;
                for(int q = 1; q + i < 8; q++) {
                    ans[i + q][j] = 1;
                    if(v[i + q][j] != '*') {
                        break;
                    }
                }
                for(int q = 1; i - q >= 0; q++) {
                    ans[i - q][j] = 1;
                    if(v[i - q][j] != '*') {
                        break;
                    }
                }
                for(int q = 1; q + j < 8; q++) {
                    ans[i][j + q] = 1;
                    if(v[i][j + q] != '*') {
                        break;
                    }
                }
                for(int q = 1; j - q >= 0; q++) {
                    ans[i][j - q] = 1;
                    if(v[i][j - q] != '*') {
                        break;
                    }
                }
            }
        }
    }
    
    int sum = 0;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            sum += ans[i][j];
        }
    }
    cout << 64 - sum;
}