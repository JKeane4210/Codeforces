//
// Created by Jonny Keane on 5/2/21.
// Credit to Nick Johnson for repointing my thoughts
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

struct Tower {
    Tower(int h, int i){
        height = h;
        index = i;
    }
    int height;
    int index;

    friend bool operator<(const Tower& a, const Tower& b);
};

bool operator<(const Tower& a, const Tower& b) {
    return a.height > b.height;
}

void solve() {
    int n, m, x;
    cin >> n >> m >> x;
    priority_queue<Tower> pq;
    for (int i = 0; i < m; ++i) {
        Tower t(0, i + 1);
        pq.push(t);
    }
    cout << "YES" << nl;
    for (int i = 0; i < n; ++i) {
        Tower top = pq.top();
        pq.pop();
        int block;
        cin >> block;
        top.height += block;
        cout << top.index << " ";
        pq.push(top);
    }
    cout << nl;
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