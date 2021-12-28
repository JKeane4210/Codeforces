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
    int n;
    cin >> n;
    vector<pair<int, int>> ranges[n + 1];
    set<pair<int, int>> visited;
    int visits[n + 1];
    for (int i = 1; i < n + 1; ++i) {
        ranges[i] = vector<pair<int, int>>();
        visits[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; ++j) {
            ranges[j].emplace_back(make_pair(a, b));
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n + 1; ++j) {
            if (ranges[j].size() - visits[j] == 1) {
                for (auto p: ranges[j]) {
                    if (visited.find(p) == visited.end()) {
                        cout << p.first << " " << p.second << " " << j << endl;
                        for (int k = p.first; k <= p.second; ++k) {
                            visits[k]++;
                        }
                        visited.insert(p);
                        break;
                    }
                }
                break;
            }
        }
    }
    cout << endl;
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