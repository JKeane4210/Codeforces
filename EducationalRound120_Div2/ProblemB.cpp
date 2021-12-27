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
    int p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    string likes;
    cin >> likes;
    priority_queue<pair<int, int>> liked;
    priority_queue<pair<int, int>> disliked;
    for (int i = 0; i < n; ++i) {
        if (likes[i] == '1') {
            liked.push(make_pair(-p[i], i));
        } else {
            disliked.push(make_pair(p[i], i));
        }
    }
    while (!disliked.empty()) {
        auto top = disliked.top();
        disliked.pop();
        if (liked.empty()) continue;
        if (abs(top.first) > abs(liked.top().first)) {
            swap(p[top.second], p[liked.top().second]);
            liked.pop();
        }
    }
    for (auto i: p) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i= 0; i < t; ++i) {
        solve();
    }

    return 0;
}