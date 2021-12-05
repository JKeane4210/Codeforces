//
// Created by Jonny Keane on 12/4/21.
//

#include <bits/stdc++.h>

#define ll long long long long
#define ld long long double
#define pb push_back

#define V vector
#define vi V<long long>
#define vll V<ll>
#define vd V<double>
#define pii pair<long long, long long>
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

vector<long long> attacks;

bool kills(long long h, long long k) {
    for (long long i = 0; i < attacks.size(); ++i) {
        if (i < attacks.size() - 1) {
            h -= min(attacks[i + 1] - attacks[i], k);
        } else {
            h -= k;
        }
    }
    return h <= 0;
}

void solve() {
    long long n;
    long long h;
    cin >> n >> h;
    attacks.clear();
    for (long long i = 0; i < n; ++i) {
        long long num;
        cin >> num;
        attacks.emplace_back(num);
    }
    long long left = 0;
    long long right = 2e18;
    while (left < right) {
        long long middle = left + (right - left) / 2;
        if (kills(h, middle)) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    long long curr = right; // at this point, is to the left
    while (!kills(h, curr)) {
        ++curr;
    }
    cout << curr << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}