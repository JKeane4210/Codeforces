//
// Created by Jonny Keane on 5/2/21.
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
    int n, m, x;
    cin >> n >> m >> x;
    int data[n]; // val to tower
    int towers[n];
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        sum += data[i];
    }
    int goal = sum / m;
    int max = 0, min = 1000000000;
    int currTower = 1;
    int curr = 0;
    for (int i = 0; i < n; ++i) {
        if (curr >= goal) {
            ++currTower;
            if (curr > max) {
                max = curr;
            }
            if (curr < min) {
                min = curr;
            }
            curr = 0;
        }
        towers[i] = currTower;
        curr += data[i];
    }
    if (max - min <= x) {
        cout << "YES" << nl;
        for (int i: towers) {
            cout << i << " ";
        }
        cout << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        solve();
    }

    return 0;
}