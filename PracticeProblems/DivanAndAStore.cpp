//
// Created by Jonny Keane on 11/29/21.
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<int> prices;
        for (int j = 0; j < n; ++j) {
            int price;
            cin >> price;
            if (price >= l && price <= r) {
                prices.emplace_back(price);
            }
        }
        sort(prices.begin(), prices.end());
        int bought = 0;
        while (bought != prices.size() && k - prices[bought] >= 0) {
            k -= prices[bought];
            ++bought;
        }
        cout << bought << endl;
    }

    return 0;
}