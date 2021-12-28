//
// Created by Jonny Keane on 12/27/21.
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

void solve() {
    int n, m, r, c, rd, cd;
    cin >> n >> m >> r >> c >> rd >> cd;
    int dr = 1;
    int dc = 1;
    int time = 0;
    while (r != rd && c != cd) {
        int nr = r + dr;
        int nc = c + dc;
        if (nr > n || nr < 1) {
            dr = -dr;
            nr = r + dr;
        }
        if (nc > m || nc < 1) {
            dc = -dc;
            nc = c + dc;
        }
        r = nr;
        c = nc;
        ++time;
    }
    cout << time << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}