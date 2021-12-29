//
// Created by Jonny Keane on 12/29/21.
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

string pal(const string& s) {
    string c(s);
    reverse(c.begin(), c.end());
    return string(s) + c;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n >= 2 && s[0] == s[1]) {
        cout << s.substr(0, 2) << endl;
        return;
    } else {
        int idx = 1;
        while (idx < n && s[idx] <= s[idx - 1]) {
            ++idx;
        }
        cout << pal(s.substr(0, idx)) << endl;
    }
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