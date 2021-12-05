//
// Created by Jonny Keane on 12/4/21.
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

const int MOD = 998244353;

int add(int a, int b) {
    int sum = a + b;
    if (sum > MOD) {
        sum %= MOD;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;
    vector<int> dp1(n + 2), dp2(n + 2);
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        dp1[num + 2] = add(dp1[num + 1], dp1[num + 1]);
        dp2[num - 1] =
        dp1[num + 1] = add(dp1[num + 1], dp1[num + 1]);
        if (num == 0) dp1[1] = add(dp1[1], 1);
        if (num == 1) dp2[0] = add(dp1[0], 1);
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