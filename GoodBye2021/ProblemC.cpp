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

int delta_chain_len(const vector<int> & v, int start, int delta, int pos_delta) {
    int count = 1;
    int jumps = 0;
    for (int i = start + pos_delta; i < v.size(); i += pos_delta) {
        ++jumps;
        if (v[i] == v[start] + jumps * delta) {
            ++count;
        }
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    if (n <= 2) {
        cout << 0 << endl;
        return;
    }
    int max_ = 0;
    for (int i = 0; i < n; ++i) { // for every start
        for (int j = i + 1; j < n; ++j) { // for every first jump
            max_ = max(max_, delta_chain_len(arr, i, arr[j] - arr[i], j - i));
        }
    }
    cout << n - max_ << endl;
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