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
    int n, l, r;
    cin >> n >> l >> r;
    multiset<int> left;
    multiset<int> right;
    for (int i = 0; i < l; ++i) {
        int s;
        cin >> s;
        left.insert(s);
    }
    for (int i = 0; i < r; ++i) {
        int s;
        cin >> s;
        right.insert(s);
    }
    int dollars = 0;
    vector<int> removals;
    for (int s: left) {
        auto rightFind = right.find(s);
        if (rightFind != right.end()) {
            right.erase(rightFind);
            removals.push_back(s);
            n -= 2;
        }
    }
    for (int i: removals) {
        left.erase(left.find(i));
    }
    int leftSize = left.size();
    int rightSize = right.size();
    if (right < left) {
        for (int i = 0; i < leftSize - (n / 2); ++i) {
            bool done = false;
            for (int ls: left) {
                if (left.count(ls) - right.count(ls) > 1) {
                    ++dollars;
                    auto itr = left.find(ls);
                    right.insert(ls);
                    left.erase(itr);
                    done = true;
                    break;
                }
            }
            if (done) continue;
            for (int s: left) {
                if (right.count(s) != 0) {
                    continue;
                } else {
                    auto itr = left.find(s);
                    left.erase(itr);
                    right.insert(s);
                    ++dollars;
                    done = true;
                    break;
                }
            }
            if (done) continue;
            auto itr = left.begin();
            ++dollars;
            right.insert(*itr);
            left.erase(itr);
        }
    } else { // left < right
        for (int i = 0; i < rightSize - (n / 2); ++i) {
            bool done = false;
            for (int rs: right) {
                if (right.count(rs) - left.count(rs) > 1) {
                    ++dollars;
                    auto itr = right.find(rs);
                    left.insert(rs);
                    right.erase(itr);
                    done = true;
                    break;
                }
            }
            if (done) continue;
            for (int s: right) {
                if (left.count(s) != 0) {
                    continue;
                } else {
                    auto itr = right.find(s);
                    right.erase(itr);
                    left.insert(s);
                    ++dollars;
                    done = true;
                    break;
                }
            }
            if (done) continue;
            auto itr = right.begin();
            ++dollars;
            left.insert(*itr);
            right.erase(itr);
        }
    }
    for (int s: left) {
        auto rightFind = right.find(s);
        if (rightFind != right.end()) {
            right.erase(rightFind);
        }
    }
    dollars += right.size();
    cout << dollars << nl;
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
