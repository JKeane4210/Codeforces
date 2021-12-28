//
// Created by Jonny Keane on 12/28/21.
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

// h_i - 3d_i > 0
// h_i - 3d_i + d_(i + 1) + 2d_(i + 2) >= k
// these change the value
bool passes(int k, vector<int> a, const vector<int> & h) {
    for (int i = h.size() - 1; i >= 2; --i) {
        if (a[i] < k) return false;         // see if last is less than k (can't remove anything if < k)
        int rem = min(a[i] - k, h[i]);      // you can donate a[i] - k elements, but you can have at most h[i] at this point following the order
        a[i] -= 3 * (rem / 3);              // unnecessary but helpful for problem understanding
        a[i - 1] += rem / 3;                // add the d value
        a[i - 2] += 2 * (rem / 3);          // add the d value
    }
    cout << k << ": ";
    for (int i = 0; i < h.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return min(a[0], a[1]) >= k;
}

void solve() {
    int left = 1;
    int right = 0;
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
        right = max(right, h[i]);
    }
    // bin search value lowest value that can be satisfied
    while (left < right) {
        int mid = (left + right + 1) / 2;
        if (passes(mid, vector<int>(h), h)) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    cout << left << endl;
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