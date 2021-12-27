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
    long k;
    cin >> n >> k;
    long sum = 0;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    long div = min((long)arr[0], k / n);
    long min_ = LONG_MAX;
    bool keep_trying = true;
    while (keep_trying) {
        long steps = 0;
        steps += abs(arr[0] - div);
        long curr_sum = sum - abs(arr[0] - div);
        int ind = n - 1;
        while (curr_sum > k) {
            curr_sum -= abs(arr[ind] - div);
            ++steps;
            --ind;
        }
        if (steps <= min_) {
            min_ = steps;
            --div;
        } else {
            keep_trying = false;
        }
    }
    cout << min_ << endl;
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