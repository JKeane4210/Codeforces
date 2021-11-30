//
// Created by Jonny Keane on 11/30/21.
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
    int a[n];
    map<int, queue<int>> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (m.find(a[i]) == m.end()) {
            m[a[i]] = queue<int>();
        }
        m[a[i]].push(i);
    }
    sort(a, a + n);
    long long res = 0;
    long long x_0 = 0;
    int out[n];
    for (int i = 1; i <= n; ++i){
        long long loc = (i + 1) / 2;
        if (i % 2 == 1) {
            loc *= -1;
        }
        long long reps = a[n - i];
//        cout << loc << " ";
        res += abs(x_0 - loc) * 2 * reps;
        int idx = m[a[n - i]].front();
        m[a[n - i]].pop();
        out[idx] = loc;
    }
//    cout << endl;
    cout << res << endl;
    cout << 0 << " ";
    for (int i = 0; i < n; ++i) {
        cout << out[i] << " ";
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