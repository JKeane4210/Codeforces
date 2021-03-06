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

vector<int> solution(queue<int> data, int x) {
    vector<int> res;
    int sum = 0;
    while (!data.empty()) {
        int top = data.front();
        data.pop();
        if (sum + top == x) {
            if (data.size() != 0) {
                data.push(top);
            } else {
                res.push_back(top);
                for (int i = res.size() - 2; i >= 0;  --i) {
                    res[i + 1] = res[i];
                }
                res[0] = top;
                return res;
            }
        } else {
            res.push_back(top);
            sum += top;
        }
    }
    return res;
}

void solve() {
    int n, x;
    cin >> n >> x;
    queue<int> data;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int w;
        cin >> w;
        data.push(w);
        sum += w;
    }
    if (sum != x) {
        cout << "YES" << nl;
        for (int i: solution(data, x)) {
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