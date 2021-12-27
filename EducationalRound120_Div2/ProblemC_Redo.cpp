//
// Created by Jonny Keane on 12/27/21.
//

#include <bits/stdc++.h>

#define ll long long long long
#define ld long long double
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

long long fdiv(long long x, long long y) {
    if (x >= 0)  return x / y;
    else return (x - y + 1) / y;
}

void solve() {
    long long n;
    long long k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    long long sum_rem = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum_rem += arr[i];
    }
    long long min_moves = LONG_LONG_MAX;
    for (long long i = 0; i < n; ++i) {
        long long goal = k - sum_rem;
        long long division = fdiv(goal, i + 1);
        long long steps = i + max(arr[n - 1] - division, 0ll);
        min_moves = min(min_moves, steps);
        sum_rem -= arr[i];
    }
    cout << min_moves << endl;
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