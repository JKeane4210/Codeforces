//
// Created by Jonny Keane on 8/13/21.
//

#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define pb push_back

#define V vector
#define vi V<int>
#define vll V<ll>
#define vd V<double>
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vpii V<pii>
#define vpll V<pll>
#define graph V<vi>

// loops
#define WHILE(n) while(n--)
#define FOR(a) for(ll i=0;i<a;i++)
#define FIND(a, e) find(a.begin(), a.end(), e)
#define minimum(a) *min_element(a.begin(), a.end())
#define maximum(a) *max_element(a.begin(), a.end())

#define nl '\n'

// use M_PI for PI (imported from cmath within stdc++.h)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // code here
    int n;
    cin >> n;
    int grid[100][100];
    for (int i = 0; i < n; ++i) {
        int r, c;
        cin >> r >> c;
//        int grid[r][c];
        int res = 0;
        int min_ = INT_MAX;
        int neg_count = 0;
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < c; ++k) {
                cin >> grid[i][j];
                if (grid[i][j] < 0) {
                    neg_count++;
                }
                res += abs(grid[i][j]);
                min_ = min(min_, abs(grid[i][j]));
            }
        }
        if (neg_count % 2 == 1) {
            res -= 2 * min_;
        }
        cout << res << endl;
    }

    return 0;
}