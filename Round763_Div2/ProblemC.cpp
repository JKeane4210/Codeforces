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

int maximal_min(int curr_min, int idx, const vector<int> & h) {
    if (idx == h.size()) {
        return min(curr_min, min(h[h.size() - 1], h[h.size() - 2]));
    }
    bool smaller = false;
    for (int i = idx - 2; i < h.size(); ++i) {
        if (h[i] < curr_min) {
            smaller = true;
            break;
        }
    }
    if (!smaller) { return curr_min; }
    int max_min = 0;
    for (int d = h[idx] / 3; d >= 0; --d) {
        vector<int> new_h(h);
        new_h[idx] -= 3 * d;
        new_h[idx - 1] += d;
        new_h[idx - 2] += 2 * d;
        max_min = max(maximal_min(min(new_h[idx - 2], curr_min), idx + 1, new_h), max_min);
    }
    return max_min;
}

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    cout << maximal_min(INT_MAX, 2, h) << endl;
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