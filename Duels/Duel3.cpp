//
// Created by Jonny Keane on 8/13/21.
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

    int n, m;
    cin >> n >> m;
    long long sizes[n];
    for (int i = 0; i < n; ++i) {
        cin >> sizes[i];
    }
    long long curr_dorm = 0;
    long long curr_room = 0;
    long long prev = 0;
    for (int i = 0; i < m; ++i) {
        long long q;
        cin >> q;
        long long p = q;
        q -= prev;
        prev = p;
        while (q > sizes[curr_dorm] - curr_room) {
            q -= sizes[curr_dorm] - curr_room;
            ++curr_dorm;
            curr_room = 0;
        }
        curr_room += q;
        // 4 in room >> q = 4
        cout << curr_dorm + 1 << " " << curr_room << endl;
    }
    return 0;
}