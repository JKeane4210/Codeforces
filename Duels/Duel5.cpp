//
// Created by Jonny Keane on 8/14/21.
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

    int n;
    cin >> n;
    for (int  i= 0; i < n; ++i) {
        int m;
        cin >> m;
        int vals[m];
        for (int j = 0; j < m; ++j) {
            cin >> vals[j];
        }
        for (int k = 0; k < vals[0]; ++k) {
            cout << (char)('a' + (k % 26));
        }
        if (vals[0] == 0) {
            cout << (char)('z');
        }
        cout << endl;
        for (int j = 0; j < m - 1; ++j) {
            int a = min(vals[j], vals[j + 1]);
            for (int k = 0; k < a; ++k) {
                cout << (char)('a' + (k % 26));
            }
            if (a == 0) {
                cout << (char)('z' - (j % 26));
            }
            cout << endl;
        }
    }

    return 0;
}